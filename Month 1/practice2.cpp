#include <iostream>
using namespace std;

int main(){

    cout << "Plz input an interger:";

    int num, sum = 0;

    cin >> num;

    while ( num > 0){

        sum = sum + num % 10;
        num = num / 10;

    }

    cout << sum << endl;
}
