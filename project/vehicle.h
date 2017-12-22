#ifndef VEHICLE
#define VEHICLE

#include<string>
enum VehicleType {
    VT_TwoWheeler,    VT_ThreeWheeler,    VT_FourWheeler
};

class Vehicle {
public:
    virtual void printVehicle(int) = 0;
    void setLicense(std::string);
    std::string getLicense();

    int base;
    static const int time_t = 5;
    std::string license;
};

#endif