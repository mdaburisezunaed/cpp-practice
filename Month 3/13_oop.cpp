#include<iostream>

using namespace std;

class student{

    /*
       members are of two types.
        --> member variable
        --> member function 

        #how to access a public member?
        
        answer - through the object of that class by using dot operator
    */

    public: //access specifier - public, private, protected

    // how to access a public member?
    // answer - through the object of that class by using dot operator

    string name;
    int id;
    int marks_oopt;
    int marks_oopl;

    private:
    
    int password;

};

int main(){

    struct student s1;
    s1.name = "Rahim";
    s1.id = 110001;
    s1.marks_oopt = 90;
    s1.marks_oopl = 95;

    struct student s2;
    s2.name = "Karim";
    s2.id = 110002;
    s2.marks_oopt = 90;
    s2.marks_oopl = 95;



}