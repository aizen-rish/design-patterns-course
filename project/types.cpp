#include "types.h"
#include <iostream>

using namespace std;

void TwoWheeler::printVehicle(int parking_time) 
{
        cout << "I am two wheeler" << endl;
        base = 2;
        cout <<"cost:"<<parking_time*base;
}


void ThreeWheeler::printVehicle(int parking_time) 
{
        cout << "I am three wheeler" << endl;
        base = 3;
        cout <<"cost:"<<parking_time*base;
}

void FourWheeler::printVehicle(int parking_time) 
{
        cout << "I am four wheeler" << endl;
        base = 4;
        cout <<"cost:"<<parking_time*base;
    
}

