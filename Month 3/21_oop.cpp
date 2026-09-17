#include <iostream>
using namespace std;

int main() {
    int num = 10;      // Normal variable
    int *ptr;          // Pointer declaration

    ptr = &num;        // Store address of num

    cout << "num-এর ভ্যালু: " << num << endl;
    cout << "num-এর অ্যাড্রেস: " << &num << endl;
    cout << "ptr-এ থাকা অ্যাড্রেস: " << ptr << endl;
    cout << "ptr dereference করে পাওয়া ভ্যালু: " << *ptr << endl;

    return 0;
}