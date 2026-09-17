#include <iostream>
using namespace std;

class student{

    public:


    int id;
    string name;
    double cgpa;

    void display(){

        cout << "ID : " << id << endl;
        cout << "Name of student : " << name << endl;
        cout << "CGPA is :" << cgpa << endl;

    }
};

int main(){
    
    student obj[100];

    obj[25].name = "samira";
    obj[25].cgpa = 4.00;

    obj[62].id = 62;
    obj[62].name = "Junayed";
    obj[62].cgpa = 4.00;

    obj[62].display();
}

//array initialization theke next din suru