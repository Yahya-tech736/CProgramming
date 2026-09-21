#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    double temperature;
    bool isHazardous = false;

    cout << "Give a temperature in farenheight: ";
    cin >> temperature;

    if (temperature < -459.67) {
        cout << "Error: The temperature can't be below absolute zero." << endl;
    } else if (temperature < 32) {
        cout << "freezing" << endl;
    } else if (temperature >= 32 && temperature < 100) {
        cout << "normal" << endl;
    } else {
        cout << "high" << endl;
    }

    if (temperature < 0 || temperature > 105) {
        isHazardous = true;
        cout << "Hazard Alert: Active" << endl;
    } else {
        isHazardous = false;
        cout << "Hazard Alert: Inactive" << endl;
    }

    return 0;
}