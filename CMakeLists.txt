cmake_minimum_required(VERSION 3.30)
project(labs)

set(CMAKE_CXX_STANDARD 20)

add_executable(labs main.cpp
        Vehicle.h
        LandVehicle.h
        Car.h
        SportsCar.h
        Truck.h
        AirVehicle.h
        Helicopter.h
        WaterVehicle.h
        " Boat.h"
        Submarine.h
        LandVehicle.cpp
        Car.cpp
        SportsCar.cpp
        Truck.cpp
        AirVehicle.cpp
        Helicopter.cpp
        WaterVehicle.cpp
        Boat.cpp
        Submarine.cpp
)
