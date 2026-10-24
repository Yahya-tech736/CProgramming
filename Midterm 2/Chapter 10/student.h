#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    double gpa;
    static int studentTotal;

public:
    Student(std::string n, double g);
    ~Student();

    double getGPA() const;
    static int getStudentTotal();
};

#endif