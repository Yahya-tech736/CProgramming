#include "student.h"

int Student::studentTotal = 0;

Student::Student(std::string n, double g) {
    name = n;
    gpa = g;
    studentTotal++;
}

Student::~Student() {
    studentTotal--;
}

double Student::getGPA() const {
    return gpa;
}

int Student::getStudentTotal() {
    return studentTotal;
}