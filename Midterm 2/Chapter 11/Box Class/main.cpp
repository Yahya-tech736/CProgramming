#include "box.h"
#include <iostream>

int main() {
    Box box1(5.0);
    Box box2(7.0);

    box1.initiateComparison(&box1);
    box1.initiateComparison(&box2);
    return 0;
}
