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
        int id;

    public:
        //Slot();
        void setVehicle(Vehicle *);
        
        void setPTime( int );
        //void setType( int );
        
        int getID();
        int getPTime();
        //int getType();


};


#endif