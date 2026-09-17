#include <iostream>

using namespace std;

class cricket{

    private:
        int number = 5;

    friend void example(cricket A);
    friend void example_2(cricket A);
    friend class Football;
}; 

class Football{
    public:
        void show(cricket A){
            cout<<A.number<<endl;
        }
};

void example(cricket A){

    cout << "A: " << A.number << endl;
}

void example_2(cricket A){

    A.number = 2;
    cout << "Updated A: " << A.number << endl;

}


int main(){

    cricket c;
    example(c);
    example_2(c);
}