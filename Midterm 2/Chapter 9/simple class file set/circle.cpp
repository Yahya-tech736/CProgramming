#include "circle.h"
#include <cmath>
#include <iostream>

Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(double r) {
    radius = r;
}

double Circle::getArea() {
    return M_PI * radius * radius;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}