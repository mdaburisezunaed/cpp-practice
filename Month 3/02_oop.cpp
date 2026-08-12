#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int age;

    cin >> age;


    cout <<"My name is Md. Abu Rise Zunaed." << endl;
    cout <<"My age is "<< age << "." << endl;

    short int x = -32769; 
    
    /*
        short int = 2 byte = 16 bit ---> n = 16
        int       = 4 byte = 32 bit

        formula of range = -2^(n-1) to 2^(n-1) - 1
    */
    int y = 32768;

    cout << x << endl << y << endl;

// x = -32769 dile output 32678 hoy kno? or, can we predict the output of the values which are out of the range
// unsigned --> only positive value,, what is the range of unsigned variable


}