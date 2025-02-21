#include "LandVehicle.h"
#include <sstream>

std::string LandVehicle::getInfo() const {
    std::ostringstream oss;
    oss << "LandVehicle class:: Number of wheels: " << numWheels;
    return oss.str();
}