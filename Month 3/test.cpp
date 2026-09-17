#include <iostream>

using namespace std;

int main(){

    int num;
    cin >> num;
    
    if (num >= 80)
        cout << "A+" << endl;

    else if (num < 80 && num >= 70)
        cout << "A" << endl;   

    else if (num < 70 && num >= 60)
        cout << "A-" << endl;   
    
    else if (num < 60)
        cout << "A" << endl; 



    

}