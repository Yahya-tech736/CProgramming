#include "box.h"
#include <iostream>

Box::Box(double w) {
    this->width = w;
}

double Box::getWidth() const {
    return this->width;
}

void Box::initiateComparison(const Box* anotherBox) {
    compareBoxes(this, anotherBox);
}

void compareBoxes(const Box* box1, const Box* box2) {
    if (box1 == box2) {
        std::cout << "Comparing the box to itself (same memory address)." << std::endl;
        return;
    }
    if (box1->getWidth() > box2->getWidth()) {
        std::cout << "The first box is wider than the second box." << std::endl;
    } else if (box1->getWidth() < box2->getWidth()) {
        std::cout << "The second box is wider than the first box." << std::endl;
    } else {
        std::cout << "Both boxes have equal widths." << std::endl;
    }
}