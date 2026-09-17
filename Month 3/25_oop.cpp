#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    cout << "ptr address: " << ptr << ", value: " << *ptr << endl;

    ptr++;

    cout << "After ptr++: " << ptr << ", value: " << *ptr << endl;

    ptr++;

    cout << "After another ptr++: " << ptr << ", value: " << *ptr << endl;

    return 0;
}