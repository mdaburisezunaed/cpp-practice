#include <iostream>
#include <string>
using namespace std;

class MobilePhone {
private:
    string brand;
    string model;
    double price;

public:
    // Default constructor
    MobilePhone() {
        brand = "Unknown";
        model = "N/A";
        price = 0.0;
    }

    // Constructor with brand
    MobilePhone(string b) {
        brand = b;
        model = "Not Specified";
        price = 0.0;
    }

    // Constructor with all parameters
    MobilePhone(string b, string m, double p) {
        brand = b;
        model = m;
        price = p;
    }

    // Display phone information
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    MobilePhone phone1;
    MobilePhone phone2("Samsung");
    MobilePhone phone3("Apple", "iPhone 15", 120000.0);

    phone1.displayInfo();
    phone2.displayInfo();
    phone3.displayInfo();

    return 0;
}
