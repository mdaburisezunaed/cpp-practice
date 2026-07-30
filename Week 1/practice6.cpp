#include <iostream>

int main(){

    int a {10};

    int b (20);

    int c {a + b};


    std::cout << "Sum " << c << std::endl;
    

    return 0;
}