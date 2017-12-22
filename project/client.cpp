#include <iostream>
#include "vehicle.h"
using namespace std;

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

int main() 
{
    Client *pClient1 = new Client(VT_ThreeWheeler);
    Vehicle * pVehicle1 = pClient1->getVehicle();
    //pVehicle1->calculate_cost(15);
    
    Client *pClient2 = new Client(VT_TwoWheeler);
    Vehicle * pVehicle2 = pClient2->getVehicle();
    //pVehicle2->calculate_cost(20);
    
    Client *pClient3 = new Client(VT_TwoWheeler);
    Vehicle * pVehicle3 = pClient3->getVehicle();
    //pVehicle3->calculate_cost(5);
    return 0;
}