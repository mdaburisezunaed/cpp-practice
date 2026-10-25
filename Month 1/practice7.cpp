#include <iostream>
using namespace std;

class rectangle{

    int length;
    int width;

    public:   
    void set(int a, int b){
        length = a;
        width = b;
    }

    int get_length(){
        return length;
    }

    int get_width(){
        return width;
    }
    
    void show_area(){
        cout << "Area " << length*width << endl;    
    }
};

int main(){

    rectangle r1;
    r1.set(12, 10);
    r1.show_area();
    
}

