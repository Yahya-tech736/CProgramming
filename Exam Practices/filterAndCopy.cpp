#include <iostream>

int* filterAndCopy(const int* src, int size, int threshold, int& newSize) {
    if (src == nullptr || size <= 0) {
        newSize = 0;
        return nullptr;
    }

    // Step 1: Count qualifying elements using pointer arithmetic
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(src + i) > threshold) {
            count++;
        }
    }

    newSize = count;

    if (count == 0) {
        return nullptr;
    }

    // Step 2: Dynamically allocate exact heap memory required
    int* dest = new int[newSize];

    // Step 3: Copy qualifying elements using pure pointer arithmetic
    int destIndex = 0;
    for (int i = 0; i < size; i++) {
        if (*(src + i) > threshold) {
            *(dest + destIndex) = *(src + i);
            destIndex++;
        }
    }

    return dest;
}

int main() {
    int originalArray[] = {12, 5, 27, 8, 45, 3, 19};
    int originalSize = 7;
    int threshold = 10;
    int filteredSize = 0;

    std::cout << "Original Array: ";
    for (int i = 0; i < originalSize; i++) {
        std::cout << *(originalArray + i) << " ";
    }
    std::cout << std::endl;

    // Call function
    int* filteredArray = filterAndCopy(originalArray, originalSize, threshold, filteredSize);

    std::cout << "Filtered Array (elements > " << threshold << "): ";
    for (int i = 0; i < filteredSize; i++) {
        std::cout << *(filteredArray + i) << " ";
    }
    std::cout << std::endl;

    // Deallocate heap memory
    delete[] filteredArray;
    filteredArray = nullptr;

    return 0;
}