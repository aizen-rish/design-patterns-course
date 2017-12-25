#include <iostream>
using namespace std;
#include "comp.h"
#include "deco.h"

int main()
{
    Component *a1;

    cout<<"---  Without decorator : \n";
    a1=new ConcreteComponent();
    a1->op();

    cout<<"---  After decorating : \n";
    a1=new Deco1(a1);
    a1->op();
/*
    cout << "---  After decorating twice : \n";
    a1=new Deco1(a1);
    a1->op();
*/
}