#include <iostream>
using namespace std;

class Calculator {
public:
    int multiply(int a, int b = 2) {
        return a * b;
    }
};

int main() {
    Calculator c;
    Calculator *ptr = &c;

    cout << "Multiplication of two numbers: " << ptr->multiply(5, 3) << endl;
    cout << "Multiplication using default argument: " << ptr->multiply(5) << endl;

    return 0;
}