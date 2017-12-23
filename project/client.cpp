#include <iostream>
#include "types.h"
using namespace std;

#if 1
class Client 
{

    private:
        Vehicle *pVehicle;  
    
    public:
 
    // Client doesn't explicitly create objects
    // but passes type to factory method "Create()"
    Client(VehicleType type)
    {
        pVehicle = VehicleFactory::Create(type);
    }
    ~Client() 
    {
        if (pVehicle) 
        {
            delete[] pVehicle;
            pVehicle = NULL;
        }
    }
    Vehicle* getVehicle()  {
        return pVehicle;
    }
 
};
#endif 
int main() 
{
    Vehicle *d =VehicleFactory::Create(VT_FourWheeler);
    d->setLicense(" KA D# 3454");
    d->printVehicle(34);

    cout<<d->getSize()<<" "<<d->getLicense();
    #if 0
    Client *pClient1 = new Client(VT_ThreeWheeler);
    Vehicle * pVehicle1 = pClient1->getVehicle();
    pVehicle1->printVehicle(15);
    
    Client *pClient2 = new Client(VT_TwoWheeler);
    Vehicle * pVehicle2 = pClient2->getVehicle();
    //pVehicle2->calculate_cost(20);
    
    Client *pClient3 = new Client(VT_TwoWheeler);
    Vehicle * pVehicle3 = pClient3->getVehicle();
    //pVehicle3->calculate_cost(5);
    #endif
    return 0;
}