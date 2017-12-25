#include <iostream>
using namespace std;
#include "1_rect.h"

void Rect::disp() const
{
	cout << length << ":" << breadth << "\n";

}
int Rect::find_area() const
{
	//return length * breadth;
	return area_;
}

void Rect::change_length(int l)
{
	length = l;
	area_ = length * breadth;
}

void Rect::change_breadth(int b)
{
	breadth = b;
	area_ = length * breadth;
}
