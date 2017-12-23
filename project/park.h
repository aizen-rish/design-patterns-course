#ifndef PARKH
#define PARKH

#include <map>
#include "slot.h"

typedef std::map<int, Slot *> MyMap;

class Park
{
    private:
        MyMap spaces;
        static int count;
        static const int maxSize=25;

    public:
        Park();
       // ~Park();

        friend class ParkIter;

        void enter(int ,Vehicle*);
        void remove(Vehicle*);
        int getCapacity();
        
        int findEmpty();

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
            //index = prk.spaces.begin();
            ind=0;
            //return prk->spaces[ind];
        }
        void next()
        {
            //index=index++;
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
            //return index == prk.spaces.end();
            return ind == prk->maxSize;
        }
        int getIndex()
        {
            return ind;
        }

};
#endif