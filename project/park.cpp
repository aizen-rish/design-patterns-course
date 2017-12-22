#include <set>
#include <iostream>

#include "slot.h"
#include "park.h"

using namespace std;

void Park::enter(string lic, int time, int type)
{
    Slot s;
    s.setLicense(lic);
    s.setPTime(time);
    s.setType(type);

    spaces.insert(s);
}

void remove(int license, int type)
{
    
}
