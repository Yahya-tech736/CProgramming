#include <iostream>
#include <vector>

double findmax(const double list[], int ARRAYSIZE) {
    double max = list[0];
    for (int i = 1; i < ARRAYSIZE; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    return max;
}

std::vector<double> filterAboveAverage(const double list[], int ARRAYSIZE) {
    double average = 0;
    for (int i = 0; i < ARRAYSIZE; i++) {
        average += list[i];
    }
    average = average / ARRAYSIZE;

    std::vector<double> aboveAverage;
    for (int i = 0; i < ARRAYSIZE; i++) {
        if (list[i] > average) {
            aboveAverage.push_back(list[i]);
        }
    }
    return aboveAverage;
}

int main() {
    const int ARRAYSIZE = 10;
    double list[ARRAYSIZE] = {1.5, 9.8, 3.2, 7.1, 5.6, 2.4, 8.9, 4.3, 6.7, 0.5};

    std::cout << "Max value: " << findmax(list, ARRAYSIZE) << std::endl;

    std::vector<double> aboveAvg = filterAboveAverage(list, ARRAYSIZE);

    std::cout << "Vector size: " << aboveAvg.size() << std::endl;

    std::cout << "Elements above average: ";
    for (size_t i = 0; i < aboveAvg.size(); i++) {
        std::cout << aboveAvg.at(i) << " ";
    }
    std::cout << std::endl;

    aboveAvg.pop_back();
    std::cout << "Size after pop_back: " << aboveAvg.size() << std::endl;

    return 0;
}