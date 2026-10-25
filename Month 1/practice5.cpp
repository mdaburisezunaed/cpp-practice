#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Plz enter 2 integers(A, B):" << endl;
    cin >> a >> b;

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    cout << "Before swapping: a = " << a << " b = " << b << endl;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "After swapping: a = " << a << " b = " << b << endl;
    
    return 0;
}