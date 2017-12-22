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

Slot::Slot()
{
    vh_t=NULL;
    pTime=0;
}


#if 0

int Slot::getID() const
{
    return id;
}

bool operator<(const Slot &left, const Slot &right)
{
    return left.getID() < right.getID();
}

void Slot::setType( int typ )
{
    type=typ;
}
int Slot::getType()
{
    return type;
}

#endif