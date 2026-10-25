#include <iostream>
using namespace std;

// Area of a square
int area(int side) {
    return side * side;
}

// Area of a rectangle
int area(int length, int width) {
    return length * width;
}

// Area of a circle
double area(double radius) {
    return 3.1416 * radius * radius;
}

int main() {
    cout << "Area of square = " << area(5) << endl;
    cout << "Area of rectangle = " << area(4, 6) << endl;
    cout << "Area of circle = " << area(3.0) << endl;

    return 0;
}