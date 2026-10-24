#include <iostream>
using namespace std;

int* reverse(const int* list, int size) {
    int* reversedList = new int[size];
    for (int i = 0, j = size - 1; i < size; i++, j--) {
        reversedList[j] = list[i];
    }
    return reversedList;
}

void printList(const int* list, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 5;

    int* list = new int[size]{1, 2, 3, 4, 5};
    std::cout << "Original List: ";
    printList(list, size);

    int* reversedList = reverse(list, size);
    std::cout << "Reversed List: ";
    printList(reversedList, size);

    delete[] list;
    delete[] reversedList;
    return 0;
}