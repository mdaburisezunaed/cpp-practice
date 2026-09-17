#include <iostream>
using namespace std;

int main() {
    int arr[3] = {100, 200, 300};

    cout << arr[1] << endl;
    cout << *(arr + 1) << endl;
    cout << *(1 + arr) << endl;
    cout << 1[arr] << endl;

    return 0;
}