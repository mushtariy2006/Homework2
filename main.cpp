#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "LandVehicle.h"
#include "Car.h"
#include "SportsCar.h"
#include "Truck.h"
#include "AirVehicle.h"
#include "Helicopter.h"
#include "WaterVehicle.h"
#include "Boat.h"
#include "Submarine.h"

using namespace std;

int main() {
    vector<Vehicle*> vehicles;
    vehicles.push_back(new LandVehicle("LandBrand", 2020, 4));
    vehicles.push_back(new Car("Toyota", 2021, 4, 4));
    vehicles.push_back(new SportsCar("Ferrari", 2023, 4, 2, 350));
    vehicles.push_back(new Truck("Volvo", 2019, 6, 18.5));
    vehicles.push_back(new AirVehicle("Boeing", 2018, 12000));
    vehicles.push_back(new Helicopter("Apache", 2022, 5000, 4));
    vehicles.push_back(new WaterVehicle("Yamaha", 2020, "Recreational"));
    vehicles.push_back(new Boat("Sunseeker", 2021, "Luxury", 10.5));
    vehicles.push_back(new Submarine("Seawolf", 2015, "Military", 800));

    // Iterate through the vector and call getInfo() for each vehicle
    for (int i = 0; i < vehicles.size(); i++) {
        Vehicle* ptr = vehicles[i];
        cout << ptr->getInfo() << endl;
        cout << "---" << endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < vehicles.size(); i++) {
        delete vehicles[i];
    }

    return 0;
}