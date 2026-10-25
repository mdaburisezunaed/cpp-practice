#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b);
};

// Function defined outside the class
int Calculator::add(int a, int b) {
    return a + b;
}

int main() {
    Calculator c;
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum = " << c.add(a, b) << endl;

    return 0;
}