#include <iostream>
using namespace std;
#include "3_rect.h"

void Rect::disp()
{
	cout << length << ":" << breadth << "\n";

}
int Rect::find_area()
{
	return length * breadth;
}

void Rect::change_length(int l)
{
	length = l;
}

void Rect::change_breadth(int b)
{
	breadth = b;
}
