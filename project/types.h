#include "vehicle.h"

class TwoWheeler : public Vehicle 
{ 
public:
    void printVehicle(int);
    TwoWheeler()
    {
      size=2;
    }
};

class ThreeWheeler : public Vehicle
{
  public:
    void printVehicle(int);
   ThreeWheeler()
   {
     size=3;
   }
};

class FourWheeler : public Vehicle
{
  public:
    void printVehicle(int);
    FourWheeler()
    {
      size=4;
    }
  
};

class VehicleFactory
{
public:
  static Vehicle *Create(VehicleType type);
};