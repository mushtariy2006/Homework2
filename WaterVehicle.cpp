//
#include "WaterVehicle.h"
#include <sstream>

std::string WaterVehicle::getInfo() const {
    std::ostringstream oss;
    oss << "WaterVehicle class:: Vessel type: " << vesselType;
    return oss.str();
}// Created by steelbut on 2/21/2025.
//
