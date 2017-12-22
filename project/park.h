#ifndef PARKH
#define PARKH

#include <set>
#include "slot.h"

class Park
{
    private:
        std::set< Slot > spaces;
        const int maxSize=25;

    public:
        Park();
        ~Park();

        void enter(std::string , int , int);
        void remove();
        int getCapacity();
        
};

#endif