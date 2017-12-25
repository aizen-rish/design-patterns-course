#ifndef DECO_H
#define DECO_H
#include "comp.h"

class Deco : public Component
{
	public:
		Deco(Component *pc) : pc(pc) { }
		virtual void op() { pc->op(); }
	private:
		Component* pc;	
};
class Deco1 : public Deco
{
	public:
		virtual void op();
		Deco1(Component* pc);

};

class Deco2 : public Deco
{
	public:
		virtual void op();
		Deco2(Component* pc);

};

class Deco3 : public Deco
{
	public:
		Deco3(Component *x);
		virtual void op();
};
#endif
