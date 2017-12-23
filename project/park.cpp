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

    spaces.insert(MyPair(count++,s));
    
    //int index=findEmpty();
    if(index==-1)
    {
        cout<<" Parking full !\n";
        return;
    }
    ParkIter *mod=new ParkIter(this,index);
    mod->setItem(s);
    cout<<"Entered the parking!!\n";
}

void Park::remove(Vehicle *pt)
{
    ParkIter *ser = new ParkIter(this);
    ser->first();
    
    while (!ser->isDone())
    {
        if (ser->currentItem()->getVehicle() == pt )
        {
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
    return maxSize;
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
/*
ParkIter *Park::createIterator() const
{
    return new ParkIter(this);
}

8*/