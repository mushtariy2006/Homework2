//
// Created by steelbut on 2/21/2025.
//

#ifndef WATERVECHICLE_H
#define WATERVECHICLE_H

#include "Vehicle.h"

class WaterVehicle : public Vehicle {
protected:
    std::string vesselType;

public:
    WaterVehicle(const std::string& brand, int year, const std::string& vesselType)
        : Vehicle(brand, year), vesselType(vesselType) {}
    std::string getInfo() const override;
};

#endif // WATERVECHICLE_H