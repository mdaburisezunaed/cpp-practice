/*
    Constructor are of three types:

        -> default 
        -> parameterized
        -> copy 
    
    
    
    Destructor

        -> works a bit like default constructor
        -> no parameter, no copy
        -> last in first out is the way how it destroys an object
    

    Function Overloading

        -> when there are two or more functions with same name and parameter 


    Friend Function

        ->
        
    Friend Class,  
*/

#include<iostream>

using namespace std;

class cricket{

    public:

        int number;

        cricket (){
            cout <<"Constructor"<< endl;
        }

        cricket (int a){
            number = a;
            cout <<"Parameterized Constructor: "<< number<< endl;
        }

        cricket (int a, int b){
            number = a;
            int run = b;
            cout <<"Number: "<< number<< endl;
            cout <<"Run: "<< run<< endl;
        }

        cricket (cricket &A){
            number = A.number;
            cout <<"Copied number: "<< number <<endl;
        }
/*
        ~cricket (){

            cout << "Object destroyed." << endl;

        }
*/

        void sum (int a, int b){
            cout << "Sum_1 "<< endl;
        }

        void sum(float k){
            cout << "Sum_2"<< endl;
        }
};


int main(){

    cricket c;
    //delete &c; destroying object
    cricket d(10);
    cricket e(5,8);
    cricket f = d;//copy constructor
    c.sum(10, 5);
    c.sum(10.5);

}