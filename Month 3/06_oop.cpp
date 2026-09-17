#include <iostream>

using namespace std;

int myFunction(int x){

    int sum = 0;

    for(int i=1; i<=x; i++){

        sum = sum + i;

    }

    return sum;

}



int main(){

 

    int x = myFunction(3);

    cout << x << endl;

    

}