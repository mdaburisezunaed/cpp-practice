#include <iostream>
using namespace std;

void increaseByPointer(int *num) {
    *num = *num + 10;

    cout << "Inside function *num: " << *num << endl;
}

int main() {
    int x = 5;

    increaseByPointer(&x);

    cout << "After function call x: " << x << endl;

    return 0;
}