#include "types.h"
#include <iostream>

using namespace std;

void TwoWheeler::printVehicle(int parking_time) 
{
        cout << "I am two wheeler" << endl;
        base = 2;
        cout <<"cost:"<<parking_time*base<<endl;
}


void ThreeWheeler::printVehicle(int parking_time) 
{
        cout << "I am three wheeler" << endl;
        base = 3;
        cout <<"cost:"<<parking_time*base<<endl;
}

void FourWheeler::printVehicle(int parking_time) 
{
        cout << "I am four wheeler" << endl;
        base = 4;
        cout <<"cost:"<<parking_time*base<<endl;
    
}

Vehicle *VehicleFactory::Create(VehicleType type)
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