#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    void input() {
        cin >> id >> salary;
    }
    void display() {
        cout << "ID: " << id << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e[5];
    cout << "Enter ID and salary of 5 employees:" << endl;

    for (int i = 0; i < 5; i++) {
        e[i].input();
    }
    cout << "\nEmployee Information:" << endl;

    for (int i = 0; i < 5; i++) {
        e[i].display();
    }
    return 0;
}