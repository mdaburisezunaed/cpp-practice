#include <iostream>

int main (){


    int weight;


    std::cin >> weight;

    if (weight >= 4){
        if (weight % 2 == 0)
            std::cout << "Yes" << std::endl;
        
        else
            std::cout << "No" << std::endl;
    }

    else
        std::cout << "No" << std::endl;






}