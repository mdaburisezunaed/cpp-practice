#include <iostream>
#include <vector>
#include <optional>

using namespace std;

optional<vector<vector<int>>> createStaircase(vector<int> nums) {
    size_t step = 1;
    vector<vector<int>> subsets;

    while (!nums.empty()) {
        if (nums.size() >= step) {
            subsets.push_back(
                vector<int>(nums.begin(), nums.begin() + step)
            );

            nums.erase(nums.begin(), nums.begin() + step);
            step++;
        } else {
            return nullopt;
        }
    }

    return subsets;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    auto result = createStaircase(nums);

    if (!result.has_value()) {
        cout << "False" << endl;
    } else {
        for (const auto& row : result.value()) {
            cout << "[";

            for (size_t i = 0; i < row.size(); i++) {
                cout << row[i];

                if (i < row.size() - 1) {
                    cout << ", ";
                }
            }

            cout << "]" << endl;
        }
    }

    return 0;
}