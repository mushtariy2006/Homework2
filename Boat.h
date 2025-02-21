//
// Created by steelbut on 2/21/2025.
//

#ifndef BOAT_H
#define BOAT_H

#include "WaterVehicle.h"

class Boat : public WaterVehicle {
private:
    double length;

public:
    Boat(const std::string& brand, int year, const std::string& vesselType, double length)
        : WaterVehicle(brand, year, vesselType), length(length) {}
    std::string getInfo() const override;
};

#endif // BOAT_H