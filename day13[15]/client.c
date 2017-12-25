#include <stdio.h>
#include "tree.h"

int main()
{
	printf("welcome to a discussion on trees\n");
	
	tree_t t1;
	int a1[] = {40, 20, 60, 50, 70, 30, 10};
	int n1 = 7;
	init_tree(&t1);
	int i;
	for(i = 0; i < n1; ++i)
	{
		insert_tree(&t1, a1[i]);
	}
	disp_tree(&t1);

	iterator_t it1;
	init_iterator(&it1, &t1);
	while(has_next(&it1))
	{
		int key = next(&it1);
		printf("%d\n", key);
	}
#if 0
	tree_t t2;
	int a2[] = {70, 60, 50, 40, 30, 20, 10};
	int n2 = 7;
	init_tree(&t2);
	for(int i = 0; i < n1; ++i)
	{
		insert_tree(&t2, a2[i]);
	}
	disp_tree(&t2);

	tree_t t3;
	init_tree(&t3);
	disp_tree(&t3);
#endif

}
