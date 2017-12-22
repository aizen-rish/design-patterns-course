#include "vehicle.h"

class TwoWheeler : public Vehicle 
{
public:
    void printVehicle(int);
};

class ThreeWheeler : public Vehicle
{
  public:
    void printVehicle(int);
};

class FourWheeler : public Vehicle
{
  public:
    void printVehicle(int);
};

class VehicleFactory
{
public:
  static Vehicle *Create(VehicleType type);
};