#include <iostream>
using namespace std;

int main(){

    int num = 20;

    int *ptr;

    ptr = &num;

    cout << ptr << endl;
    cout << *ptr << endl; //dereference



    //changing value by using pointer


    *ptr = 10;
    cout << *ptr << endl;




    // using null pointer


    int *p = nullptr;

    if (p == nullptr)
        cout <<"No valid address" << endl;



    // double pointer

    int **ptr2 = &ptr;
    cout << ptr2 << endl;
    cout << **ptr2 << endl;

}