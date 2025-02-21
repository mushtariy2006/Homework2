//
// Created by steelbut on 2/21/2025.
//
#include "Helicopter.h"
#include <sstream>

std::string Helicopter::getInfo() const {
    std::ostringstream oss;
    oss << "Helicopter class:: Rotor count: " << rotorCount;
    return oss.str();
}