#include <iostream>
using namespace std;
#include "3_rect.h"
#include "3_rect.h"

int main()
{
#if 0
	Rect r1;
	r1.l = 10; r1.b = 20;
	cout << r1.l << ":" << r1.b << "\n";
#endif
	Rect r1(10, 20);
	r1.disp();
	cout << "area : " << r1.find_area() << "\n";

	r1.change_length(30);
	r1.disp();
	cout << "area : " << r1.find_area() << "\n";

	r1.change_breadth(40);
	r1.disp();
	cout << "area : " << r1.find_area() << "\n";

}
