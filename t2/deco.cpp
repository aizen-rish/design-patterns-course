#include <iostream>
using namespace std;
#include "deco.h"

Deco1::Deco1(Component *in)
{
    if(sizeof(in)==sizeof(component))
    Deco
}

void Deco1::op()
{
    cout << "Decorated by deco1\n";
    Deco::op();
    cout<<" - \n";
    //Deco::op();
}

Deco2::Deco2(Component *in) : Deco(in) {}

void Deco2::op()
{
    cout << "Decorated by deco2\n";
    Deco::op();
}