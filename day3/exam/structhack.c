#include <stdio.h>
#include <stdlib.h>

struct vect
{
	int n;
	int a[1];
};

int main()
{
	/* code */
	struct vect *d;
	int n=10;
	d = (struct vect*) malloc( sizeof(*d) + sizeof(int)*(n-1));
	d->n=n;
	d->a[0]=3;
	d->a[1]=4;
	d->a[2]=5;
	printf("%d\n", d->a[2] );
	return 0;
}