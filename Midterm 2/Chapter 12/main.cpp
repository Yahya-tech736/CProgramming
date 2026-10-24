#include "generic.hpp"
#include <iostream>
#include <string>

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Integer Stack Top: " << intStack.peek() << std::endl;
    std::cout << "Popping elements from intStack: ";
    while (!intStack.isEmpty()) {
        std::cout << intStack.peek() << " ";
        intStack.pop();
    }
    std::cout << "\n\n";

    Stack<std::string> stringStack;
    stringStack.push("Data Structure");
    stringStack.push("Class Template");
    stringStack.push("C++");

    std::cout << "String Stack Top: " << stringStack.peek() << std::endl;
    std::cout << "Popping elements from stringStack: ";
    while (!stringStack.isEmpty()) {
        std::cout << stringStack.peek() << " ";
        stringStack.pop();
    }
    std::cout << std::endl;

    return 0;
}