#include <iostream>
#include <string>

struct Lecture {
    std::string title;
    std::string author;
    int duration;
};

Lecture createLecture(const std::string& title, const std::string& author, int duration) {
    Lecture lec;
    lec.title = title;
    lec.author = author;
    lec.duration = duration;
    return lec;
}

void printLecture(const Lecture& lec) {
    std::cout << "Title: " << lec.title << std::endl;
    std::cout << "Author: " << lec.author << std::endl;
    std::cout << "Duration: " << lec.duration << " minutes" << std::endl;
}

int main() {
    Lecture lecture = createLecture("Object & Classes Intro", "Igor Mirsalikhov", 50);
    printLecture(lecture);
    return 0;
}