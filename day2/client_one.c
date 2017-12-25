#include <stdio.h>
#include "one.h"
int comp1(int x, int y)
{
	return x % 10 < y % 10;
}
int main()
{
	int a[] = {25, 6, 111, 37, 9};
	mysort(a, 5);
	disp(a, 5);
	mysort_callback(a, 5, comp1);
	disp(a, 5);

}
