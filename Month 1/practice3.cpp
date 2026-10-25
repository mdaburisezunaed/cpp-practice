#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Plz enter 3 integers(A, B, C):" << endl;

    cin >> a >> b >> c;

    if (a > b){
        if (a > c)
            cout << "A is the largest number" << endl;
        else
            cout << "C is the largest number."<< endl;
    }
    else{
        if(b > c)
            cout << "B is the largest number." << endl;

        else 
            cout << "C is the largest number." << endl;
    }



    return 0;
}