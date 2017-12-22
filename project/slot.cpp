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

int Slot::getID()
{
    return id;
}


#if 0

void Slot::setType( int typ )
{
    type=typ;
}
int Slot::getType()
{
    return type;
}

#endif