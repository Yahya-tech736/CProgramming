#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

class Circle {
private:
    double radius;

public:
    Circle();
    Circle(double r);
    double getArea();
    double getRadius();
    void setRadius(double r);
};

#endif