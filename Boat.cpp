#include "Boat.h"
#include <sstream>

std::string Boat::getInfo() const {
    std::ostringstream oss;
    oss << "Boat class:: Length: " << length << " meters";
    return oss.str();
}//
// Created by steelbut on 2/21/2025.
//
