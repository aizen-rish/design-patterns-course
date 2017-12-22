#include "vehicle.h"
#include "types.cpp"

Vehicle* VehicleFactory::Create(VehicleType type)
{
    if (type == VT_TwoWheeler)
        return new TwoWheeler();
    else if (type == VT_ThreeWheeler)
        return new ThreeWheeler();
    else if (type == VT_FourWheeler)
        return new FourWheeler();
    else
        return NULL;
}

void Vehicle::setLicense(std::string s)
{
    license = s;
}

std::string Vehicle::getLicense()
{
    return license;
}