#include "student.h"
#include "gpaUtil.h"
#include <iostream>

int main() {
    std::cout << "Initial count: " << Student::getStudentTotal() << std::endl;

    Student student1("Hassan", 3.4);
    Student student2("Yasso", 3.9);

    std::cout << "Total students after creation: " << Student::getStudentTotal() << std::endl;

    std::cout << "Student 1 Honor Roll: "
              << (GPAUtils::isHonorRoll(student1.getGPA()) ? "Yes" : "No") << std::endl;
    std::cout << "Student 2 Honor Roll: "
              << (GPAUtils::isHonorRoll(student2.getGPA()) ? "Yes" : "No") << std::endl;

    std::cout << GPAUtils::formatGPA(student1.getGPA()) << std::endl;

    return 0;
}