#include "car.h"
#include "dealer.h"
#include <iostream>

int main() {
    Dealer ferman;

    // Named objects
    Car car1(2022, "Toyota", "Camry");
    Car car2(2021, "Honda", "Civic");

    ferman.addCar(car1);
    ferman.addCar(car2);

    // Anonymous objects
    ferman.addCar(Car(2020, "Ford", "Mustang"));
    ferman.addCar(Car(2019, "Chevrolet", "Malibu"));

    std::cout << "Inventory of cars at Ferman's dealership:" << std::endl;
    ferman.showInventory();

    return 0;
}