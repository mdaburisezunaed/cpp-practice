#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "sizeof(arr): " << sizeof(arr) << " bytes" << endl;
    cout << "sizeof(ptr): " << sizeof(ptr) << " bytes" << endl;

    return 0;
}