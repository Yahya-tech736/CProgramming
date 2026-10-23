#include "circle.h"
#include <iostream>

int main() {
    Circle c1; // default constructor
    Circle c2(5.0); // parameterized constructor

    Circle c4;
    std::cout << "radius of c4: ";
    double r;
    std::cin >> r;
    c4.setRadius(r);
    
    std::cout << "Area of c4: " << c4.getArea() << std::endl;

    return 0;
}