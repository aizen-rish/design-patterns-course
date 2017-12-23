#include <iostream>
#include <algorithm>

#include "park.h"
typedef std::pair<int, Slot*> MyPair;

using namespace std;

ParkIter::ParkIter(Park *s,int i)
{
    prk = s;
    ind=i;
}

ParkIter::ParkIter(Park *s)
{
    prk=s;
}

Park::Park()
{   
    //for(int i=0;i<maxSize;i++)
    //    spaces.insert(MyPair(i,NULL));
}


void Park::enter(Vehicle *pt,int scost)
{
    Slot *s=new Slot(scost);
    s->setVehicle(pt);
    updateSpace(scost);
    if( getSpace() > totalSpace)
    {
        cout << " Parking full !\n";
        updateSpace(-scost);
        return;
    }
    spaces.insert(MyPair(Park::getCount(),s));
    Park::updateCount(1);
    //int index;
    //index=findEmpty();
    
   // ParkIter *mod=new ParkIter(this,count);
    //mod->setItem(s);
    cout<<"Entered the parking!!\n";
}

void Park::remove(Vehicle *pt)
{
    ParkIter *ser = new ParkIter(this);
    ser->first();
    Vehicle *temp;
    while (!ser->isDone())
    {
        temp = ser->currentItem()->getVehicle();
        if ( temp == pt)
        {
            Park::updateSpace(temp->getSize());
            ser->setItem(NULL);
        }
        ser->next();
    }
}

int Park::findEmpty()
{
    ParkIter *ser = new ParkIter(this);
    ser->first();
    while (!ser->isDone())
    {
        if (ser->currentItem() == NULL)
        {
          
            return ser->getIndex();
        }
        ser->next();
    }
    return -1;
    
}

int Park::getCapacity()
{
    return totalSpace;
}


void Park::display()
{
    ParkIter *ser = new ParkIter(this);
    ser->first();
    while (!ser->isDone())
    {
        if (ser->currentItem() != NULL)
        {
            ser->currentItem()->displayVehicle();
            
        }
        ser->next();
    }
}

ParkIter Park::createIterator() const
{
    return new ParkIter(this);
}