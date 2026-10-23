#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }
};

void printArea(Circle c) {
    std::cout << "Area: " << c.getArea() << std::endl;
}

int main() {
    Circle c1(5.0);
    std::cout << "Named object area: ";
    printArea(c1);

    std::cout << "Enter radius: ";
    double r;
    std::cin >> r;

    std::cout << "Anonymous object area: ";
    printArea(Circle(r));

    return 0;
}