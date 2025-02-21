#include "AirVehicle.h"
#include <sstream>

std::string AirVehicle::getInfo() const {
    std::ostringstream oss;
    oss << "AirVehicle class:: Max altitude: " << maxAltitude << " meters";
    return oss.str();
}//
// Created by steelbut on 2/21/2025.
//
