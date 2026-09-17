#include <iostream>

using namespace std;


int main(){

    int x = 12;

    int *ptr = &x;

    ptr = &x;

    cout << ptr << endl;

    int y = 20;

    ptr = &y;

    cout << ptr << endl;

}