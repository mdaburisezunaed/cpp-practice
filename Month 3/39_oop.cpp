#include <iostream>
#include <string>

using namespace std;

class c2 {
    int x;
    double y;
    string n;

public:
    c2(int a, double b, string c) {
        cout << "Constructor called" << endl;

        x = a;
        y = b;
        n = c;
    }

    void show() {
        cout << "show() called" << endl;

        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "n = " << n << endl;
    }

    ~c2() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "main() started" << endl;

    c2 obj(1, 3.0, "hii");

    obj.show();

    cout << "main() ended" << endl;

    return 0;
}