#ifndef PARKH
#define PARKH

#include <vector>
#include "slot.h"

class Park
{
    private:
        vector<Slot> spaces;
        int count;
        const int maxSize=25;

    public:
        Park();
        ~Park();

        void enter(Vehicle*);
        void remove();
        int getCapacity();
        
};

#endif