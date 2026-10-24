#ifndef GPAUTIL_H
#define GPAUTIL_H

#include <string>

class GPAUtils {
public:
    static bool isHonorRoll(double gpa);
    static std::string formatGPA(double gpa);
};

#endif