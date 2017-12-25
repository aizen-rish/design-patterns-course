#include <iostream>
using namespace std;
#include "comp.h"
#include "deco.h"

int main()
{
//	ConcreteComponent c;
//	c.op();

	Component *pc;
	Component *x;
	pc = new ConcreteComponent();
	x = new ConcreteComponent2();
	pc->op();
	
	pc = new Deco1(pc);
	pc->op();

	pc = new Deco2(pc);
	pc->op();

	pc = new Deco3(pc);
	pc->op();
	x->op();
	x= new Deco2(x);
	x->op();
}
