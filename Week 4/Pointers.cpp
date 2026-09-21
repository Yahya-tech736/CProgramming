#include <iostream>

void printAndDouble(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
        *(arr + i) *= 2;
    }
    std::cout << std::endl;
}

void reassignPointer(int* p1, int* &p2, int* newTarget) {
    p1 = newTarget;
    p2 = newTarget;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int compute(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    printAndDouble(arr, size);

    std::cout << compute(5, 3, add) << std::endl;
    std::cout << compute(5, 3, multiply) << std::endl;

    int x = 10, y = 20;
    int* ptr1 = &x;
    int* ptr2 = &x;

    reassignPointer(ptr1, ptr2, &y);

    return 0;
}