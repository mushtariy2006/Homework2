#include "Car.h"
#include <sstream>

std::string Car::getInfo() const {
    std::ostringstream oss;
    oss << "Car class:: Number of doors: " << numDoors;
    return oss.str();
}//
// Created by steelbut on 2/21/2025.
//
