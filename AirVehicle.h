//
// Created by steelbut on 2/21/2025.
//
#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle {
protected:
    int maxAltitude;

public:
    AirVehicle(const std::string& brand, int year, int maxAltitude)
        : Vehicle(brand, year), maxAltitude(maxAltitude) {}
    std::string getInfo() const override;
};

#endif // AIRVEHICLE_H