#include <stdio.h>
int x;
typedef int y; // y is a type; same as int
y z;
y i;

void (*f)(); // pointer to a function
typedef void (*g)(); // g is a type; value : pointer to a fn which has no
// parameters and returns void

typedef int a[5];

void foo()
{
	printf("this is foo\n");
}

int acc(int a[], int n) //Not a good design, we arfe hard coding it
{						//What we wanted a different initial value. we cant make any assumptions
	int init = 0;
	for( i = 0; i < n; ++i)
	{
		init += a[i];
	}
	return init;
}
int acc1(int a[], int n, int init) 
{
	for( i = 0; i < n; ++i)
	{
		init += a[i];
	}
	return init;
}
int acc2(int a[], int n, int init, int (*op)(int, int))
{
	for( i = 0; i < n; ++i)
	{
		init = op(init, a[i]);
	}
	return init;
}
int add(int x, int y) { return x + y; }
int mul(int x, int y) { return x * y; }

int main()
{
/* 	z = 10; x = 20;
	void (*f1)() = foo;
	g f2 = foo;
	f1();
	f2();
	printf("size : %u\n", sizeof(a));
	a b;
	printf("size : %u\n", sizeof(b));
 */
	int a[] = {24, 1, 123, 8, 17};
	printf("add : %d\n", acc(a, 5));
	printf("add : %d\n", acc1(a, 5, 0));
	printf("add : %d\n", acc1(a, 5, 100));
	printf("add : %d\n", acc2(a, 5, 0, add));
	printf("add : %d\n", acc2(a, 5, 1, mul));
	
}

