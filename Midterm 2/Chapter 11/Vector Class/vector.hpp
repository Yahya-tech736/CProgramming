#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

class Vector {
private:
    int* data;
    int size;
    int capacity;

public:
    Vector(int capacity = 10);
    Vector(const Vector& other); // Correct copy constructor name
    ~Vector();

    void push_back(int value);
    void pop_back();
    int at(int index) const; // Returns int
    void clear();

    int getSize() const { return size; }
};

#endif