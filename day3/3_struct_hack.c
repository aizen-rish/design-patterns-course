#include <stdio.h>
#include <stdlib.h>


// struct hack:
//	last element of the structure is an array of 1 element
//	allows the structure to have flexible length
//	memory layout is contiguous
//	- cache friendly

// size of structure shall not include the array
// assign of structure shall not copy the array
struct vector1
{
	int n;
	int *p;
};
struct vector2
{
	int n;
	int p[1];
};

int main()
{
	struct vector1 *v1;
	struct vector2 *v2;
	int n = 100;

	v1 = (struct vector1*)malloc(sizeof(*v1));
	v1->n = n;
	v1->p = (int*)malloc(sizeof(int) * n);

	v2 = (struct vector2*)malloc(sizeof(*v2) + sizeof(int) *(n - 1));
	v2->n = n;
}






