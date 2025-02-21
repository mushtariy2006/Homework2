//
// Created by steelbut on 2/21/2025.
//

#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "WaterVehicle.h"

class Submarine : public WaterVehicle {
private:
    int maxDepth;

public:
    Submarine(const std::string& brand, int year, const std::string& vesselType, int maxDepth)
        : WaterVehicle(brand, year, vesselType), maxDepth(maxDepth) {}
    std::string getInfo() const override;
};

#endif // SUBMARINE_H