#include<stdio.h>
#include<stdlib.h>

int testbit(int A[],int k)
{
    int i=k/16;
    int pos=((k%16)-1)*2;
    unsigned int flag=3;    
    flag=flag << pos;       
    return (A[i] & flag);

}

void  clearbit( int A[],  int k )                
{
    int i=k/16;
    int pos=((k%16)-1)*2;
    //A[k/16] &= ~(1 <<  pos );
    unsigned int flag=1;
    flag = flag << pos;
    A[i] = A[i] & ~flag;
    
}

int getbit(int A[],int k)
{
   int pos=((k%16)-1)*2;
   return  (A[k/16] >> pos) & (1);
}

void setbit(int A[],int k)
{
    int i=k/16;
    int pos=((k%16)-1)*2;
    unsigned int flag=1;
    flag=flag << pos;
    
    int y;
    y=getbit(A,k);
    //check for value of y
    if(y)  //Case of 01
    {
            clearbit(A,k);
            flag = flag << 1;    
            
    }
    A[i]=A[i] | flag;
    
}

int main()
{
    int n=10;
    int size=(n/16)+1;
    int *hm=(int*) calloc(size,sizeof(int));
    //printf("0 %d\n",hm[0]);
    setbit(hm,1);
   // printf("1 %d\n",hm[0]);
    setbit(hm,2);
    //printf("2 %d\n",hm[0]);
    setbit(hm,5);
    //printf("3 %d\n",hm[0]);

    int i,c;
    for(i=i;i<=n;i++)
    {
        c=testbit(hm,i);
        int pos=((i%16)-1)*2;
        c = c >> pos;
        if(c!=0)
            printf("%d %d \n",i, c);
    }
    free(hm);
    return 0;
}