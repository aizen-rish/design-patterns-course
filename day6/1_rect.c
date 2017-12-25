#include <stdio.h>
#include "1_rect.h"
#if 0
/*
// version 1 & 2
void init(rect_t *ptr_rect, int l, int b) 
{
	ptr_rect->l_ = l;
	ptr_rect->b_ = b;
}
void disp(rect_t* ptr_rect)
{
	printf("length : %d breadth : %d\n", ptr_rect->l_, ptr_rect->b_);
}
int area(rect_t* ptr_rect) 
{
	return ptr_rect->l_ * ptr_rect->b_;
}
*/
#endif


#if 1
// version 3


static void disp_rect(rect_t* ptr_rect)
{
	printf("length : %d breadth : %d\n", ptr_rect->l_, ptr_rect->b_);
}
static int area_rect(rect_t* ptr_rect) 
{
	return ptr_rect->l_ * ptr_rect->b_;
}
struct vtbl_Rect vtbl_rect = {disp_rect, area_rect};
void init_rect(rect_t *ptr_rect, int l, int b) 
{
	ptr_rect->vptr = &vtbl_rect;
	ptr_rect->l_ = l;
	ptr_rect->b_ = b;
}
void disp(rect_t *ptr_rect)
{
	ptr_rect->vptr->disp(ptr_rect);
}

int area(rect_t *ptr_rect)
{
	return ptr_rect->vptr->area(ptr_rect);
}

#endif

