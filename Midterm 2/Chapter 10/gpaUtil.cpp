#include "gpaUtil.h"
#include <iostream>

bool GPAUtils::isHonorRoll(double gpa) {
    return gpa >= 3.5;
}

std::string GPAUtils::formatGPA(double gpa) {
    return "GPA: " + std::to_string(gpa) + " / 4.0";
}