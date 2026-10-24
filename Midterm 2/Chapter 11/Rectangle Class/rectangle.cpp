#include "rectangle.h"

Rectangle::Rectangle(double length, double width) {
    this->length = length; // Resolves shadow parameter naming conflict
    this->width = width;
}

void Rectangle::setWidth(double width) {
    this->width = width; // (*this).width = width;
}

void Rectangle::setLength(double length) {
    this->length = length; // (*this).length = length;
}

double Rectangle::getArea() const {
    return this->length * this->width; // or (*this).length * (*this).width
}