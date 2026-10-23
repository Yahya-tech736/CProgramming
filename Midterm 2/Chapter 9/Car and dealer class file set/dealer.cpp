#include "dealer.h"
#include <iostream>

void Dealer::addCar(const Car& car) {
    inventory.push_back(car);
}

void Dealer::showInventory() const {
    for (const auto& car : inventory) {
        car.show();
    }
}

