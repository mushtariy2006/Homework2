//
// Created by steelbut on 2/21/2025.
//

#ifndef TRUCK_H
#define TRUCK_H

#include "LandVehicle.h"

class Truck : public LandVehicle {
private:
    double loadCapacity;

public:
    Truck(const std::string& brand, int year, int numWheels, double loadCapacity)
        : LandVehicle(brand, year, numWheels), loadCapacity(loadCapacity) {}
    std::string getInfo() const override;
};

#endif // TRUCK_H