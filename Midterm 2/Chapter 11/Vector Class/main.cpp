#include "vector.hpp"
#include <iostream>

// Passing by value triggers the Copy Constructor automatically
void displayVectorByValue(Vector vCopy) {
    std::cout << "Inside function (Copy contents): ";
    for (int i = 0; i < vCopy.getSize(); i++) {
        std::cout << vCopy.at(i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    Vector v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    // Call function taking Vector by value to test copy constructor
    displayVectorByValue(v1);

    // Explicit copy construction call syntax
    Vector v2 = v1;
    std::cout << "v2 element at index 1: " << v2.at(1) << std::endl;

    return 0;
}