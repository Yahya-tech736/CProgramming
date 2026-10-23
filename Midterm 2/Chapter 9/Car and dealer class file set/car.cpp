#include "car.h"

Car::Car() {
    year = 0;
    make = "";
    model = "";
}

Car::Car(int y, std::string m, std::string mod) {
    year = y;
    make = m;
    model = mod;
}

std::string Car::getMake() const { 
    return make; 
}

std::string Car::getModel() const { 
    return model; 
}

int Car::getYear() const { 
    return year; 
}

void Car::setMake(std::string m) { 
    make = m; 
}

void Car::setModel(std::string m) { 
    model = m; 
}

void Car::setYear(int y) { 
    year = y; 
}

void Car::show() const {
    std::cout << year << " " << make << " " << model << std::endl;
}
