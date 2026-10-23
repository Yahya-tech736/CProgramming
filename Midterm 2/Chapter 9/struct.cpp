#include <iostream>
#include <string>

struct Lecture {
    std::string lecture;
    int duration;
    std::string author;
};

void printlecture(const Lecture& item) {
    int hours = item.duration / 60;
    int minutes = item.duration % 60;

    std::cout << "Lecture: " << item.lecture << " Duration: " << hours << " hours and " << minutes << " minutes and Author: " << item.author;
}
