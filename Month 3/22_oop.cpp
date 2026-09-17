#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    *ptr = 50;

    cout << "এখন num-এর ভ্যালু: " << num << endl;

    return 0;
}