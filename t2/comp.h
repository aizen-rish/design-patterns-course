#ifndef COMP_H
#define COMP_H

class Component
{
    public:
        virtual void op()=0;
};

class ConcreteComponent : public Component
{
    public:
        virtual void op();
};

#endif
