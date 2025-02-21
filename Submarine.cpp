#include "Submarine.h"
#include <sstream>

std::string Submarine::getInfo() const {
    std::ostringstream oss;
    oss << "Submarine class:: Max depth: " << maxDepth << " meters";
    return oss.str();
}//
// Created by steelbut on 2/21/2025.
//
