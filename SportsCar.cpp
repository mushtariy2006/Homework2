#include "SportsCar.h"
#include <sstream>

std::string SportsCar::getInfo() const {
    std::ostringstream oss;
    oss << "SportsCar class:: Max speed: " << maxSpeed << " km/h";
    return oss.str();
}//
// Created by steelbut on 2/21/2025.
//
