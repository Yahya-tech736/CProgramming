#ifndef DEALER_H
#define DEALER_H

#include "car.h"
#include <vector>

class Dealer {
private:
    std::vector<Car> inventory;

public:
    void addCar(const Car& car);
    void showInventory() const;
};

#endif