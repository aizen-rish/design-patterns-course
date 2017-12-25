#include <iostream>
using namespace std;
#include "2_rect.h"

void Rect::disp() const
{
	cout << length << ":" << breadth << "\n";

}
int Rect::find_area() const
{
	//return length * breadth;
	if(is_changed_)
	{
		area_ = length * breadth;
		is_changed_ = false;
	}
	return area_;
}

void Rect::change_length(int l)
{
	length = l;
	is_changed_ = true;
}

void Rect::change_breadth(int b)
{
	breadth = b;
	is_changed_ = true;
}
