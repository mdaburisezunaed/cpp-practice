#include <iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int numbers[4] = {7, 14, 21, 28};

    printArray(numbers, 4);

    return 0;
}