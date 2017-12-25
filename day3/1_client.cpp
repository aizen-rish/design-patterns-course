#include <iostream>
using namespace std;
#include "1_rect.h"

int main()
{
	Rect r1(10, 20);
	cout << "size : " << sizeof(r1) << "\n";
#if 1
	r1.disp();
	cout << "area : " << r1.find_area() << "\n";

	r1.change_length(30);
	r1.disp();
	cout << "area : " << r1.find_area() << "\n";

	r1.change_breadth(40);
	r1.disp();
	cout << "area : " << r1.find_area() << "\n";
#endif

}
