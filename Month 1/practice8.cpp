#include <iostream>
#include <iomanip>

int main (){

    std::cout << "Hello World!" << std::endl;
    std::cout << "------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "Unformatted Table" << std::endl;
    std::cout << std::endl;

    std::cout << "Daniel" << " " << "Gray" << " " << "25" << std::endl;
    std::cout << "Dani" << " " << "Daves" << " " << "25" << std::endl;
    std::cout << "Homozi" << " " << "Alex" << " " << "25" << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------" << std::endl;

    std::cout << std::endl;


    std::cout << "Formatted Table" << std::endl;
    std::cout << std::endl;

    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Dani" << std::setw(10) << "Daves" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Homozi" << std::setw(10) << "Alex" << std::setw(5) << "25" << std::endl;

     std::cout << std::endl;
    
    
    std::cout << "------------------------" << std::endl;

    std::cout << std::endl;


    std::cout << "Formatted Tablen with Variable" << std::endl;
    std::cout << std::endl;
    

    int col {10};

    std::cout << std::setw(col) << "Daniel" << std::setw(col) << "Gray" << std::setw(col) << "25" << std::endl;
    std::cout << std::setw(col) << "Dani" << std::setw(col) << "Daves" << std::setw(col) << "25" << std::endl;
    std::cout << std::setw(col) << "Homozi" << std::setw(col) << "Alex" << std::setw(col) << "25" << std::endl; 



     std::cout << std::endl;
    
    
    std::cout << "------------------------" << std::endl;

    std::cout << std::endl;


    std::cout << "Formatted Tablen with Variable with Left Justification" << std::endl;
    std::cout << std::endl;
    



    std::cout <<  std::left;
    std::cout << std::setw(col) << "Daniel" << std::setw(col) << "Gray" << std::setw(col) << "25" << std::endl;
    std::cout << std::setw(col) << "Dani" << std::setw(col) << "Daves" << std::setw(col) << "25" << std::endl;
    std::cout << std::setw(col) << "Homozi" << std::setw(col) << "Alex" << std::setw(col) << "25" << std::endl; 

    return 0;
}