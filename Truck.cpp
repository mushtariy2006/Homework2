#include "Truck.h"
#include <sstream>

std::string Truck::getInfo() const {
    std::ostringstream oss;
    oss << "Truck class:: Load capacity: " << loadCapacity << " tons";
    return oss.str();
}//
// Created by steelbut on 2/21/2025.
//
