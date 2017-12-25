#include <iostream>
#include "rect.h"

using namespace std;

void Rect::disp() const
{
	cout << length << ":" << breadth << "\n";
}

int Rect::getarea() const
{
	if(is_changed_)
	{
		area_ = length * breadth;
		is_changed_=false;
	}
	return area_;
}

void Rect::setLen(int l)
{
	length = l;
	is_changed_ = true;
}

void Rect::setBrt(int b)
{
	breadth = b;
	is_changed_ = true;
}
