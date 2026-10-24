#ifndef BOX_H
#define BOX_H

#include <iostream>

class Box;

void compareBoxes(const Box* box1, const Box* box2);

class Box {
private:
    double width;

public:
    Box(double w);
    double getWidth() const;
    void initiateComparison(const Box* anotherBox);
};

#endif