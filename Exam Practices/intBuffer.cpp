#include <iostream>

class IntBuffer {
private:
    int* data;
    int capacity;
    int count;

public:
    IntBuffer(int cap = 5) : capacity(cap), count(0) {
        data = new int[capacity];
    }

    IntBuffer(const IntBuffer& other) : capacity(other.capacity), count(other.count) {
        data = new int[capacity];
        for (int i = 0; i < count; i++) {
            *(data + i) = *(other.data + i);
        }
    }

    ~IntBuffer() {
        delete[] data;
    }

    bool append(int value) {
        if (count >= capacity) {
            return false;
        }
        *(data + count) = value;
        count++;
        return true;
    }

    int* getRawPointer() const {
        return data;
    }

    int getCount() const {
        return this->count;
    }

    int getCapacity() const {
        return this->capacity;
    }
};

int main() {
    IntBuffer buf1(3);
    buf1.append(10);
    buf1.append(20);
    buf1.append(30);

    IntBuffer buf2 = buf1;

    buf1.append(40);

    std::cout << "buf2 contents via raw pointer arithmetic: ";
    int* ptr = buf2.getRawPointer();
    for (int i = 0; i < buf2.getCount(); i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    std::cout << "buf1 count: " << buf1.getCount() << std::endl;
    std::cout << "buf2 count: " << buf2.getCount() << std::endl;

    return 0;
}