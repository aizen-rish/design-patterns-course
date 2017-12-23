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
        int space;
    public:
        Slot(int);
        void setVehicle(Vehicle *);
        Vehicle* getVehicle();
        void setPTime( int );
        int getPTime();
        void displayVehicle();
};


#endif