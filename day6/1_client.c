#include <stdio.h>
#include "1_rect.h"
#include "1_square.h"
#if 0
// version 1
int main()
{
	rect_t r1;
	init(&r1, 20, 10);
	disp(&r1);
	printf("Area : %d\n", area(&r1));
	
}
#endif

#if 0
// version 2
int main()
{
	rect_t r1;
	init_rect(&r1, 20, 10);
	r1.disp(&r1);
	printf("Area : %d\n", r1.area(&r1));

	square_t s1;
	init_square(&s1, 30);
	s1.disp(&s1);
	printf("Area : %d\n", s1.area(&s1));

	rect_t r2;
	init_rect(&r2, 40, 30);
	r2.disp(&r2);
	printf("Area : %d\n", r2.area(&r2));

	
}
#endif
#if 1
// version 3
int main()
{
	rect_t r1;
	init_rect(&r1, 20, 10);
	disp(&r1);
	printf("Area : %d\n", area(&r1));

/*
	square_t s1;
	init_square(&s1, 30);
	s1.disp(&s1);
	printf("Area : %d\n", s1.area(&s1));
*/
	rect_t r2;
	init_rect(&r2, 40, 30);
	disp(&r2);
	printf("Area : %d\n", area(&r2));

	
}
#endif
