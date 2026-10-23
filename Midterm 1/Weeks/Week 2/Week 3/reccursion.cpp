#include <iostream>

int sum_even_digits(unsigned int number) {
    if (number == 0) {
        return 0;
    }

    int digit = number % 10;

    if (digit % 2 == 0) {
        return digit + sum_even_digits(number / 10);
    } else {
        return sum_even_digits(number / 10);
    }
}

int main() {
    unsigned int number;
    std::cout << "enter positive integer: ";
    std::cin >> number;
    std::cout << "The returned sum is: " << sum_even_digits(number) << std::endl;
    return 0;
}