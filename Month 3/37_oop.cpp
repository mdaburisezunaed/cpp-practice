#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    string email;
    string password;
    int points;
    static int count;

public:
    string user_name;
    string contact_number;

    // Parameterless Constructor
    User()
    {
        email = "";
        password = "";
        points = 0;
        user_name = "";
        contact_number = "";

        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    User(string uname, string mail, string pass, string contact, int p)
    {
        user_name = uname;
        email = mail;
        password = pass;
        contact_number = contact;
        points = p;

        count++;
        cout << "Object " << count << " created." << endl;
    }

    // Destructor
    ~User()
    {
        count--;
        cout << "Object destroyed. Remaining objects: " << count << endl;
    }

    // Display Information
    void get_info()
    {
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

        cout << "Enter old password: ";
        cin >> old_pass;

        if (old_pass == password)
        {
            cout << "Enter new password: ";
            cin >> new_pass;
            password = new_pass;
            cout << "Password updated successfully!" << endl;
        }
        else
        {
            cout << "Incorrect old password!" << endl;
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

// Definition of static member
int User::count = 0;

int main()
{
    User u1("Infinity", "inf@example.com", "1234", "01711111111", 100);
    User u2("Method", "method@example.com", "5678", "01822222222", 250);

    u1.get_info();

    u1.add_points(50);

    cout << "\nPoints after adding: " << u1.get_point() << endl;

    u1.update_password();

    return 0;
}