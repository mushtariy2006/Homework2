//
// Created by steelbut on 2/21/2025.
//

#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H


#include "Vehicle.h"

class LandVehicle : public Vehicle {
protected:
    int numWheels;

public:
    LandVehicle(const std::string& brand, int year, int numWheels)
        : Vehicle(brand, year), numWheels(numWheels) {}
    std::string getInfo() const override;
};


#endif //LANDVEHICLE_H
