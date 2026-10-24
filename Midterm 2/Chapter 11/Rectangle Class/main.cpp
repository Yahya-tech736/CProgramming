#include "rectangle.h"
#include <iostream>

int main() {
    // Dynamically allocate Rectangle object on the heap
    Rectangle* rectPtr = new Rectangle(10.0, 5.0);

    // Call setters using arrow notation
    rectPtr->setLength(12.0);
    rectPtr->setWidth(6.0);

    // Access getArea() via pointer
    std::cout << "Area: " << rectPtr->getArea() << std::endl;

    // Free allocated memory
    delete rectPtr;
    rectPtr = nullptr;

    return 0;
}