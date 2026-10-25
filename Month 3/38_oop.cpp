#include <iostream>
#include <string>

using namespace std;

class c2 {
    int x;
    double y;
    string n;

public:
    c2(int a, double b, string c) {
        x = a;
        y = b;
        n = c;
    }

    void show() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "n = " << n << endl;
    }
};

int main() {

    c2 obj(1, 3.0, "hii");

    // Pointer to object
    c2 *ptr = &obj;

    // Pointer to member function
    void (c2::*funcPtr)() = &c2::show;

    // Dynamic call through object pointer
    (ptr->*funcPtr)();

    return 0;
}