#include <iostream>
using namespace std;

int factorial (int a){

    int total = 1;   
    int n = a;
    while(n>0){

        total = total * n;
        n = n-1;

    } 
    return total;
}

int main(){

    int a;
    cout << "Plz input an integer:"<< endl;
    cin >> a;
    cout << factorial(a) << endl;
    return 0;
}