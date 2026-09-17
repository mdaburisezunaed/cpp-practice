#include <iostream>

using namespace std;

class stk{

    int arr[100];
    int top;

    public:
    stk ()
    {
        top = -1;
    }

    void push (int val){

              if (top == 99){

            cout << "overflow" << endl;
    
        }else{

        top++;
        arr[top] = val;
        
        }
        

    }

    int pop (){

        if (top == -1){

            cout << "underflow" << endl;
            return -1;

        }else{

        int x = arr[top];
        top--;
        return x;
        
        }

    }
};

int main(){

    stk stk1;
    /*
    
    stk1.push(1);
    stk1.push(2);
    stk1.push(3);
    stk1.push(4);
    stk1.push(5);
    stk1.push(6);
    */

    for (int i = 0; i <= 100; i++ ){

        stk1.push(i);

    }

    cout << stk1.pop() << endl;
    cout << stk1.pop() << endl;
    cout << stk1.pop() << endl;
    cout << stk1.pop() << endl;
    cout << stk1.pop() << endl;
    cout << stk1.pop() << endl;
    
}


