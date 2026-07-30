#include <iostream>

int add(int x, int y){
    int sum = x + y;
    return sum;
}

int main(){

    int num1 = 10;
    int num2 = 20;

    int sum = num1 + num2;

    std::cout << "The sum is " << sum << std::endl;
    std::cout << "The value is " << add(10, 20) << std::endl;



    return 0;
}