#include <iostream>
#include <string>

int main(){

    int age;
    std::string name;

    std::cout << "Plz enter your full name" << std::endl;
    std::getline(std::cin, name);

    std::cout << "Plz enter your age" << std::endl;
    std::cin >> age;

        //std::cin >> name >> age;
        //taking two inputs together
    std::cout << "Hello " << name << ". Your age is " << age << std::endl;




    return 0;
}