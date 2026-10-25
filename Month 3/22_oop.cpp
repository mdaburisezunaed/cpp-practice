#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <regex>
#include <cstdio>
#include <memory>
#include <algorithm>
#include <sstream>

using namespace std;

// Download the published Google Doc using curl.
string downloadPage(const string& url) {
    string command = "curl -Ls '" + url + "'";
    string result;

    FILE* pipe = popen(command.c_str(), "r");

    if (!pipe) {
        cerr << "Error: Could not download the document.\n";
        return "";
    }

    char buffer[4096];

    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        result += buffer;
    }

    pclose(pipe);
    return result;
}

// Remove HTML tags.
string stripHTML(string text) {
    return regex_replace(text, regex("<[^>]*>"), "");
}

// Decode common HTML entities.
string decodeHTML(string text) {
    vector<pair<string, string>> entities = {
        {"&nbsp;", " "},
        {"&amp;", "&"},
        {"&lt;", "<"},
        {"&gt;", ">"},
        {"&quot;", "\""},
        {"&#39;", "'"}
    };

    for (const auto& entity : entities) {
        size_t pos = 0;

        while ((pos = text.find(entity.first, pos)) != string::npos) {
            text.replace(pos, entity.first.length(), entity.second);
            pos += entity.second.length();
        }
    }

    return text;
}

// Extract the text inside HTML table cells.
vector<string> getCells(const string& row) {
    vector<string> cells;
    regex cellRegex("<t[dh]\\b[^>]*>([\\s\\S]*?)</t[dh]>");
    auto begin = sregex_iterator(row.begin(), row.end(), cellRegex);
    auto end = sregex_iterator();

    for (auto it = begin; it != end; ++it) {
        string cell = (*it)[1].str();
        cell = decodeHTML(stripHTML(cell));

        // Trim leading and trailing whitespace.
        size_t first = cell.find_first_not_of(" \t\r\n");
        size_t last = cell.find_last_not_of(" \t\r\n");

        if (first == string::npos) {
            cell = "";
        } else {
            cell = cell.substr(first, last - first + 1);
        }

        cells.push_back(cell);
    }

    return cells;
}

// Decode the secret message and print the character grid.
void decodeSecretMessage(const string& url) {
    string html = downloadPage(url);

    if (html.empty()) {
        cerr << "Error: The document could not be downloaded.\n";
        return;
    }

    vector<tuple<int, int, string>> points;

    regex rowRegex("<tr\\b[^>]*>([\\s\\S]*?)</tr>");
    auto begin = sregex_iterator(html.begin(), html.end(), rowRegex);
    auto end = sregex_iterator();

    int maxX = 0;
    int maxY = 0;

    for (auto it = begin; it != end; ++it) {
        string row = (*it)[1].str();
        vector<string> cells = getCells(row);

        // Skip the header row and malformed rows.
        if (cells.size() < 3) {
            continue;
        }

        try {
            int x = stoi(cells[0]);
            string character = cells[1];
            int y = stoi(cells[2]);

            points.emplace_back(x, y, character);

            maxX = max(maxX, x);
            maxY = max(maxY, y);
        } catch (...) {
            // Ignore headers and rows that don't contain coordinates.
        }
    }

    if (points.empty()) {
        cerr << "Error: No character data found in the document.\n";
        return;
    }

    // Initialize the grid with spaces.
    vector<vector<string>> grid(
        maxY + 1, vector<string>(maxX + 1, " ")
    );

    // Place each character in the correctly oriented position.
    for (const auto& point : points) {
        int x, y;
        string character;

        tie(x, y, character) = point;
        grid[maxY - y][x] = character;
    }

    // Print the grid.
    for (const auto& row : grid) {
        for (const auto& character : row) {
            cout << character;
        }
        cout << '\n';
    }
}

int main() {
    string url =
        "https://docs.google.com/document/d/e/"
        "2PACX-1vSZ9d7OCd4QMsjJi2VFQmPYLebG2sGqI879_bSPugwOo_fgRcZLAFyfajPWU91UDiLg-RxRD41lVYRA/pub";

    decodeSecretMessage(url);

    return 0;
}