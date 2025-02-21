//
// Created by steelbut on 2/21/2025.
//

#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"

class Helicopter : public AirVehicle {
private:
    int rotorCount;

public:
    Helicopter(const std::string& brand, int year, int maxAltitude, int rotorCount)
        : AirVehicle(brand, year, maxAltitude), rotorCount(rotorCount) {}
    std::string getInfo() const override;
};

#endif // HELICOPTER_H