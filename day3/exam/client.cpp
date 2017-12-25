#include <iostream>
using namespace std;
#include "rect.h"

int main()
{
	Rect r1(10, 20);
	cout << "size : " << sizeof(r1) << "\n";

	r1.disp();
	cout << "area : " << r1.getarea() << "\n";
}