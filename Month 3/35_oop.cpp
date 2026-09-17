#include <iostream>
using namespace std;

// 1. Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2. Call by Pointer
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3. Call by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int p = 1, q = 2;

    swapByValue(p, q);
    cout << "swapByValue: p=" << p << ", q=" << q << endl;

    swapByPointer(&p, &q);
    cout << "swapByPointer: p=" << p << ", q=" << q << endl;

    swapByReference(p, q);
    cout << "swapByReference: p=" << p << ", q=" << q << endl;

    return 0;
}