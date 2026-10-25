#include <iostream>
#include <string>
using namespace std;

class student{

    public:
     string name;
     int marks;

     void show(){
        cout << name << " -- " << marks << endl;
     }
};

int main(){

    student s1;
    s1.name = "Rahim";
    s1.marks = 100;

    s1.show();

}


