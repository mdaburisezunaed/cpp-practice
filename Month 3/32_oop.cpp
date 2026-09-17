#include <iostream>
using namespace std;

void increaseByValue(int num) {
    num = num + 10;

    cout << "Inside function num: " << num << endl;
}

int main() {
    int x = 5;

    increaseByValue(x);

    cout << "After function call x: " << x << endl;

    return 0;
}