#ifndef DECO_H
#define DECO_H
#include "comp.h"

class Deco : public Component
{
    private:
        Component *pc;
    public:
        Deco(Component *p) : pc(p) {}
        virtual void op() {pc->op();}
};

class Deco1 : public Deco
{
    public:
        Deco1(Component *in);
        virtual void op();
};

class Deco2 : public Deco
{
  public:
    Deco2(Component *in);
    virtual void op();
};

#endif