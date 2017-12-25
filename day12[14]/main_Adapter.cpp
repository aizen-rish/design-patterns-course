#include <iostream>
using namespace std;

class Adaptee;
class Adaptee1;

class Target
{
public:
	virtual ~Target(){ }
	virtual double find() = 0;
};

class Adaptee
{
public:
	double add(int x, int y) { return x + y; }

};

class Adapter : public Target
{
public:
	Adapter() : p(new Adaptee) { }
	double find() { return p->add(10, 20) ; }
	Adaptee *p;
};


class Adaptee1
{
public:
	double mul(int x, int y) { return x * y; }

};

class Adapter1 : public Target
{
public:
	Adapter1() : p(new Adaptee1) { }
	double find() { return p->mul(10, 20) ; }
	Adaptee1 *p;
};


void f(Target *p)
{
	cout << p->find() << endl;
}


main()
{
	Target *pT1;
	Target *pT2;

	pT1 = new Adapter;
	cout << pT1->find() << endl;

	pT2 = new Adapter1;
	cout << pT2->find() << endl;

	f(pT1);
	f(pT2);

	return 0;
}
