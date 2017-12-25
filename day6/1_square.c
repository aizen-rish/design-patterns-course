#include <stdio.h>
#include "1_square.h"

static void disp(square_t* ptr_sq)
{
	printf("length : %d\n", ptr_sq->l_);
}
static int area(square_t* ptr_sq) 
{
	return ptr_sq->l_ * ptr_sq->l_;
}
void init_square(square_t* ptr_sq, int l) 
{
	ptr_sq->l_ = l;
	ptr_sq->area = area;
	ptr_sq->disp = disp;
}

