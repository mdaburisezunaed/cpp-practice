#include <iostream>

using namespace std;

class user{

    string email;
    string password;
    int points;
    static int count;


    public:

    string user_name;
    string contact_number;

    //parameter less constructor
    user(){

        email = "";
        password = "";
        points = 0;
        user_name = "";
        contact_number = "";

        cout << "default constructor called" << endl;

    }


    //parameterized constructor

    user (string uname, string mail, string pass, string contact,int p){

        user_name = uname;
        email = mail;
        password = pass;
        contact_number = contact;
        points = p;

        count++;
        cout << "Object " << count << " created." << endl;

    }

    //destructor

    ~user(){

        count--;
        cout << "Object destroyed. Remaining objects: " << count << endl;
    }

    //display info

    void display(){

        cout << "\n----- User Information -----" << endl;
        cout << "Username : " << user_name << endl;
        cout << "Email    : " << email << endl;
        cout << "Contact  : " << contact_number << endl;
        cout << "Points   : " << points << endl;

    }

    // Update Password

    void update_password()
    {
        string old_pass, new_pass;

        cout << "Enter the old password plz: ";
        cin >> old_pass;

        if (old_pass == password)
        {
            cout << "Plz enter your new password: ";
            cin >> new_pass;
            password = new_pass;
            cout << "Password updated successfully!" << endl;
        }
        else
        {
            cout << "Incorrect old password!!" << endl;
        }
    }

    // Add Points
    void add_points(int n)
    {
        points += n;
    }

    // Return Points
    int get_point()
    {
        return points;
    }

};

int user::count = 0;



int main(){

    user u1("Rise", "rise880@gmail.com", "1234", "01811111111", 100);
    user u2("Zunaed", "zunaed@gmail.com", "5678", "01822222222", 250);

    u1.display();

    u1.add_points(50);

    cout << "\nPoints after adding: " << u1.get_point() << endl;

    u1.update_password();


}