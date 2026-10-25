#include <iostream>
using namespace std;

void check(int a){
    if (a % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    
}

int main(){
    cout << "plz input an integer:" << endl;

    int num;

    cin >> num;

    check (num);
}