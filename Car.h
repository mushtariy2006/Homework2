//
// Created by steelbut on 2/21/2025.
//

#ifndef CAR_H
#define CAR_H

#include "LandVehicle.h"

class Car : public LandVehicle {
private:
    int numDoors;

public:
    Car(const std::string& brand, int year, int numWheels, int numDoors)
        : LandVehicle(brand, year, numWheels), numDoors(numDoors) {}
    std::string getInfo() const override;
};

#endif // CAR_H