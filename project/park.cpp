#include <set>
#include <iostream>

#include "slot.h"
#include "park.h"

using namespace std;

void Park::enter(Vehicle *pt)
{
    Slot s;
    s.setVehicle(pt);
    s.id=--count;
    spaces.push_back(s);
}

Park::Park()
{
    count=0;
}
void Park::remove()
{

}

int Park::getCapacity()
{
    return maxSize;
}
