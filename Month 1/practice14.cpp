#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    // Parameterized constructor
    Number(int n) {
        num = n;
    }
    // Copy constructor
    Number(const Number &obj) {
        num = obj.num;
    }
    void display() {
        cout << "Number = " << num << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(n1);
    cout << "First object: ";
    n1.display();
    cout << "Second object: ";
    n2.display();

    return 0;
}