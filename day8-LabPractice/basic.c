#include<stdio.h>

int testbit( int A[],  int k )
{
      return ( (A[k/32] & (1 << (k%32) )) != 0 ) ;     
}

int main()
{
    int n=10;
    int hm[]={n,45};
    int d=testbit(hm,1);

    printf("%d",14 & 3);
 
    return 0;
}