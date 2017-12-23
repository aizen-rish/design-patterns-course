#ifndef PARKH
#define PARKH

#include <map>
#include "slot.h"
#include "strategy.h"

typedef std::map<int, Slot *> MyMap;

class Park
{
    private:
        MyMap spaces;
        static int count;
        //static int maxSize=25;
        static const int totalSpace=100;
    public:
        Park();
       // ~Park();

        friend class ParkIter;

        void enter(int ,Vehicle*);
        void remove(Vehicle*);
        
        int getCapacity();
        
        int findEmpty();
        void display();
       // ParkIter *createIterator() const;
};

class ParkIter
{
    private:
        Park *prk;
        MyMap::iterator index;
        int ind;
    public:
        ParkIter(Park*);
        ParkIter(Park*,int);
        void first()
        {
            ind=0;
        
        }
        void next()
        {
            ind++;
        }
        void last()
        {
            ind=prk->maxSize-1;
        }
        Slot* currentItem()
        {
            return prk->spaces[ind];
        }
        void setItem(Slot *s)
        {   
            prk->spaces[ind]=s;
        }
        bool isDone()
        {
            return ind == prk->maxSize;
        }
        int getIndex()
        {
            return ind;
        }

        

};
#endif