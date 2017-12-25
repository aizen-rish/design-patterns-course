#include <iostream>

#include "slot.h"

void Slot::setVehicle(Vehicle *p)
{
    vh_t = p;
    pTime = vh_t->time_t;
}

void Slot::setPTime(int time)
{
    pTime=time;
    
}
int Slot::getPTime()
{
    return pTime;
}

Slot::Slot(int space)
{
    vh_t=NULL;
    this->space=space;
    pTime=0;
}

Slot::Slot()
{
    vh_t=NULL;
    pTime=0;
}

Vehicle* Slot::getVehicle()
{
    return vh_t;
}

void Slot::displayVehicle()
{
    std::cout<<"Vehicle at Slot : "<<vh_t->getLicense()<<std::endl;
}
