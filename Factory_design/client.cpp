#include "vehicle_factory.hpp"

#include<iostream>
#include<string.h>
int main(){
    std::string vehicleType = "";
    std::cin>>vehicleType;

    Vehicle* vehicle = VehicleFactory::getVehicle(vehicleType);

    vehicle->createVehicle();
    return 0;

}