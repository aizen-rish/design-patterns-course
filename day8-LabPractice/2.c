//Develop map and reduce funstions
#include<stdio.h>
#include<stdlib.h>

void map(int [],int[],int ,int (*op)(int));
void filter(int [],int *,int [],int *,int (*op)(int));

int odd(int n)
{
    return n%2==0 ?  0:1 ;
}

int square(int n)
{
    return n*n;
}

int perfsq(int n)
{
    int i;
    for(i=2;i<n/2;i++)
        if(i*i == n) return 1;
    return 0;
}

int negate(int n)
{
    return -n;
}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int m;
    int *newarr=(int *) malloc(n*sizeof(int));

    filter(arr,&n,newarr,&m,odd);
    int *newer=(int *) malloc(m*sizeof(int));
    map(newarr,newer,m,square);
    int i;
    for(i=0;i<m;i++)
        printf("%d ",newer[i]); 
    
    filter(arr,&n,newarr,&m,perfsq);
    int *newer1=(int *) malloc(m*sizeof(int));
    map(newarr,newer1,m,negate);
    for(i=0;i<m;i++)
        printf("%d ",newer1[i]); 
    free(newarr);
    free(newer);
    free(newer1);
    return 0;
}

void filter(int src[],int *ptr_n,int dst[],int *ptr_m,int (*op)(int))
{
    int i,l=*ptr_n;
    int j=0;
    for(i=0;i<l;i++)
    {
        if( op(src[i]) )
            dst[j++]=src[i];
    }
    *ptr_m=j;
}


void map(int src[],int dst[],int n,int (*op)(int))
{
    int i;
    for(i=0;i<n;i++)
    {
        dst[i]=op(src[i]);
    }
}