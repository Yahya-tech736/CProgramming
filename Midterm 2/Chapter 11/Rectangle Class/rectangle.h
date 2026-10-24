#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width);

    void setWidth(double width);
    void setLength(double length);
    double getArea() const;
};

#endif
