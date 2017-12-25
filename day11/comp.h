#ifndef COMP_H
#define COMP_H
class Component
{
	public:
	virtual void op() = 0;
};
class ConcreteComponent : public Component
{
	public:
	virtual void op();
};
class ConcreteComponent2 : public Component
{
	public: 
	virtual void op()
	{
		cout<< " ConcComp 2!! \n";
	}
};
#endif
