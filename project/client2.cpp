#include <iostream>
#include "park.h"
#include "types.cpp"

using namespace std;

int main()
{
    Park *ds =new Park();
    cout<<ds->getCapacity();
    Vehicle *d = VehicleFactory::Create(VT_FourWheeler);
    d->printVehicle(34);
    ds->enter(2,d);
    ParkIter *p = new ParkIter(ds);
    p->first();
    cout<<p->currentItem()->getPTime();
}
