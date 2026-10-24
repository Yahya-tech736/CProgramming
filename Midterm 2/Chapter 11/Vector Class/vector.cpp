#include "vector.hpp"
#include <iostream>
#include <stdexcept>

// Primary constructor
Vector::Vector(int capacity) : size(0), capacity(capacity) {
    data = new int[capacity];
}

// Copy constructor (Deep Copy)
Vector::Vector(const Vector& other) : size(other.size), capacity(other.capacity) {
    data = new int[capacity];
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

// Destructor
Vector::~Vector() {
    delete[] data;
}

void Vector::push_back(int value) {
    if (size == capacity) {
        // Double capacity when full
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }
    data[size++] = value;
}

void Vector::pop_back() {
    if (size == 0) return;
    --size;
}

int Vector::at(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Invalid Index");
    }
    return data[index];
}

void Vector::clear() {
    delete[] data;
    size = 0;
    capacity = 10;
    data = new int[capacity];
}