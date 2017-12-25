#include <iostream>

using namespace std;

class singleton
{
public:
    static singleton* inst(singleton* x)
    {
        if(!Pinst)
            Pinst=x;
        return Pinst;
    }
    static singleton* Pinst;
};
