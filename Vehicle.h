//
// Created by steelbut on 2/21/2025.
//

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    std::string brand;
    int year;

public:
    Vehicle(const std::string& brand, int year) : brand(brand), year(year) {}
    virtual ~Vehicle() {}
    virtual std::string getInfo() const = 0; // Pure virtual function
};

#endif // VEHICLE