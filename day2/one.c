#include <stdio.h>
#include "one.h"

void disp(int x[],  int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
}

void swap_(int *p, int *q)
{
	int temp = *p; *p = *q; *q = temp;
}

#if 0
void mysort(int a[],  int n)
{
	for(int i = 0; i < n - 1; ++i)
	{
		for(int j = i + 1; j < n; ++j)
		{
			if(a[j] < a[i])
			{
				swap_(&a[i], &a[j]);
			}
		}
	}
}

void mysort_callback(int a[],  int n,  int (*comp)(int, int))
{
	for(int i = 0; i < n - 1; ++i)
	{
		for(int j = i + 1; j < n; ++j)
		{
			if(comp(a[j], a[i]))
			{
				swap_(&a[i], &a[j]);
			}
		}
	}
}
#endif
int less_(int x, int y)
{
	return x < y;
}
void mysort(int a[],  int n)
{
	mysort_callback(a, n, less_);
}

void mysort_callback(int a[],  int n,  int (*comp)(int, int))
{
	for(int i = 0; i < n - 1; ++i)
	{
		for(int j = i + 1; j < n; ++j)
		{
			if(comp(a[j], a[i]))
			{
				swap_(&a[i], &a[j]);
			}
		}
	}
}

