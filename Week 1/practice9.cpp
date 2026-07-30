#include <iostream>

int main (){


    //initialization
/*
    can be done in two ways
    
    1.
    int a {43};

    int *b {&a};

    2.
*/
    int *b {nullptr};

    int a {53};

    b = &a;

    std::cout << "The value of a is " << a << std::endl;

    std::cout << "The value of b is " << b << std::endl;

    std::cout << "The value of *b is " << *b << std::endl;

    return 0;

}