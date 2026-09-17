#include<iostream>

using namespace std;

class student{

    public:

        int id, marksTheory, marksSessional;
        double cgpa;
        void set_marks (int x, int y);
        void set_id_cgpa (int x, double y);
        void show_id_cgpa ();
        void show_marks ();

        int get_marksTheory(){

            return marksTheory;

        }

        int get_marksSessional(){

            return marksSessional;
            
        }


    
};



void student :: set_id_cgpa(int x, double y){ //scope resolution

        id = x;
        cgpa = y;

}

void student :: set_marks(int x, int y){ //scope resolution

        marksTheory = x;
        marksSessional = y;

}

void student :: show_id_cgpa (){

        cout << "The ID of the student is: " << id << endl;
        cout << "The CGPA of the student is: " << cgpa << endl;

    } 

void student :: show_marks (){

        cout << "The theory mark of the student is: " << marksTheory << endl;
        cout << "The sessional mark of the student is: " << marksSessional << endl;


}

int main(){

        student Rahim;
        Rahim.id = 110001;
        Rahim.set_id_cgpa (113, 3.89);
        Rahim.set_marks (180, 100);



        student Karim;
        Karim.id = 110001;
        Karim.set_id_cgpa (101, 3.79);
        Karim.set_marks (160, 90);

        cout << endl;
        cout << "-------------------------" << endl;
        cout << endl;

        Rahim.show_id_cgpa();
        //Rahim.show_marks();
        cout << "Theory marks: " << Rahim.get_marksTheory() << endl;
        cout << "Sessional marks: " << Rahim.get_marksSessional() << endl;

        cout << endl;
        cout << "-------------------------" << endl;
        cout << endl;

        Karim.show_id_cgpa();
        //Karim.show_marks();
        cout << "Theory marks: " << Karim.get_marksTheory() << endl;
        cout << "Sessional marks: " << Karim.get_marksSessional() << endl;

        cout << endl;
        cout << "-------------------------" << endl;
        cout << endl;
        


}