#include <iostream>

using namespace std;

class c1{

    public:

     static int c;

     c1 (){

            c++;

            cout << c << ": Constructor called" << endl;
            /*
            if (c < 2  && c >0)
             cout << "There is " << c << " object in this class" << endl;
            else
             cout << "There are " << c << " objects in this class" << endl;
            */

     }

     ~c1(){

        cout << c << ": Object destroyed" << endl;
     }

}obj1, obj2;

void myfunc(){
    
    static int x {0};
    x++;
    //cout << x << endl;

    int y{0};
    y++;
    cout << x << " " << y << endl;

}

int c1::c = 0;

int main(){

/*
    myfunc();
    myfunc();


    cout << endl; 

    cout << "The value of c is "<< c1::c << "." << endl;

    cout << endl;
    
    c1 obj1;
    c1 obj2;
    c1 obj3;

    cout << endl;

    cout << "The value of c is "<< c1::c << endl;

    cout << endl;

*/

    
    c1 obj3,obj4;
    c1 obj5;

    cout << endl;
    cout << "-------------------------" << endl;
    cout << endl;
}