#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Stack {
private:
    T elements[10];
    int size;

public:
    Stack() : size(0) {}

    bool isEmpty() const {
        return size == 0;
    }

    int getSize() const {
        return size;
    }

    void push(const T& value) {
        if (size >= 10) {
            throw std::overflow_error("Stack overflow: Stack is full");
        }
        elements[size++] = value;
    }

    void pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack underflow: Stack is empty");
        }
        --size;
    }

    T peek() const {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty: Cannot peek");
        }
        return elements[size - 1];
    }
};

#endif