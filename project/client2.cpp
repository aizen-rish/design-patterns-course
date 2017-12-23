#include <iostream>
#include "park.h"
#include "types.cpp"

using namespace std;


int main()
{
    Park *ds =new Park();
    cout<<ds->getCapacity()<<endl;


    Vehicle *d = VehicleFactory::Create(VT_FourWheeler);
    d->printVehicle(34);
    d->setLicense("KA )$ 2343");
    ds->enter(d,d->getSize());

    d=VehicleFactory::Create(VT_FourWheeler);
    d->setLicense("KA sd 4533");
    ds->enter(d,d->getSize());

    ParkIter *p = new ParkIter(ds);
    p->first();
    cout<<p->currentItem()->getPTime();
    ds->display();
}
