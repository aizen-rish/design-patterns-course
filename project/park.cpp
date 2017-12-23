#include <iostream>
#include <algorithm>

#include "park.h"
typedef std::pair<int, Slot*> MyPair;

using namespace std;

void Park::enter(int id,Vehicle *pt)
{
    Slot *s=new Slot();
    s->setVehicle(pt);
    //spaces.begin()->second=s; //Find proper iterator to the element needed
    int index=findEmpty();
    if(index==-1)
    {
        cout<<" Parking full !\n";
        return;
    }
    ParkIter *mod=new ParkIter(this,index);
    mod->setItem(s);
    cout<<"Entered the parking!!\n";

}

ParkIter::ParkIter(Park *s,int i)
{
    prk = s;
    ind=i;
}

Park::Park()
{   
    //Slot *s=new Slot();
    for(int i=0;i<maxSize;i++)
        spaces.insert(MyPair(i,NULL));
}
void Park::remove(Vehicle *pt)
{
    //Slot s;
    //s.setVehicle(pt);
    //spaces.erase( std::find(spaces.begin(), spaces.end(), s) );
    //count--;
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

ParkIter::ParkIter(Park *s)
{
    prk=s;
}
/*
ParkIter *Park::createIterator() const
{
    return new ParkIter(this);
}

8*/