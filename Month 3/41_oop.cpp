#include<iostream>
using namespace std;

class myclass{

    int a;
    int b;

    public:

    myclass (int i, int j){

        a = i;
        b = j;

    } 

    myclass (){
        a = 0;
        b = 0;
    }

    void setAB(int x, int y){
        a = x;
        b = y;
    }

    int show_a (){
        return a;
    }
    friend int sum(myclass m);


};


int sum(myclass m){ 
    return m.a + m.b;
}
/*
inline int compare(int r, int s){

    if (r>s)
        return r;
    else
        return s;


    //return r > s ? r : s; 
}
*/
int main(){

        myclass oop;
        oop.setAB(10, 12);

        myclass eee(12,24);
        cout << "eee " << eee.show_a() << endl;

        

        cout << "summation - " << sum(oop) << endl;

        //cout << "Highest num - " << compare(10, 12) << endl;


}