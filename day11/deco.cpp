#include <iostream>
using namespace std;
#include "deco.h"

Deco1::Deco1(Component* pc) : Deco(pc) { }

void Deco1::op()
{
		cout << "Decorated by deco1\n";
		Deco::op();
}

Deco2::Deco2(Component* pc) : Deco(pc) { }

void Deco2::op()
{
		cout << "Decorated by deco2\n";
		Deco::op();
}

Deco3::Deco3(Component *x) : Deco(x) {}

void Deco3::op()
{
	cout<< " Decorated by deco3 \n";
	Deco::op();
}
