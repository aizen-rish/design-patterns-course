#include "vehicle.h"

void Vehicle::setLicense(std::string s)
{
    license = s;
}

std::string Vehicle::getLicense()
{
    return license;
}