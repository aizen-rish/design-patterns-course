#ifndef SLOT
#define SLOT

#include <string>
#include <ctime>
#include "vehicle.h"

class Slot 
{
    private:
        Vehicle *vh_t;
        int pTime;      //time_t

    public:
        Slot(Vehicle *p): vh_t(p) { pTime=vh_t->time_t;}
        
        void setPTime( int );
        //void setType( int );
        
        int getPTime();
        //int getType();


};


#endif