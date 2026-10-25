#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) {
        num = n;
    }

    friend void display(Number obj);
};

void display(Number obj) {
    cout << "Number = " << obj.num << endl;
}

int main() {
    Number n(10);
    display(n);

    return 0;
}