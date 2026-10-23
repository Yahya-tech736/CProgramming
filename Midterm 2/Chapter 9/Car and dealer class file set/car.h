#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car();
    Car(int y, std::string m, std::string mod);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;

    void setMake(std::string m);
    void setModel(std::string m);
    void setYear(int y);

    void show() const;
};

#endif