//
// Created by steelbut on 2/21/2025.
//

#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
private:
    double maxSpeed;

public:
    SportsCar(const std::string& brand, int year, int numWheels, int numDoors, double maxSpeed)
        : Car(brand, year, numWheels, numDoors), maxSpeed(maxSpeed) {}
    std::string getInfo() const override;
};

#endif // SPORTSCAR_H