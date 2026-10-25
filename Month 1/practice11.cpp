#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default constructor called." << endl;
    }

    Student(int id) {
        cout << "Parameterized constructor called. ID = " << id << endl;
    }

    ~Student() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    Student s1;
    Student s2(101);

    return 0;
}