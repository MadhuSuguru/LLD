#include "vehicle_factory.hpp"

#include<iostream>


Vehicle* VehicleFactory::getVehicle(std::string vehicleType){
    Vehicle* vehicle;
    if(vehicleType == "car"){
        vehicle = new Car;
    }
    else if(vehicleType == "bike"){
        vehicle = new Bike;
    }
    return vehicle;
}