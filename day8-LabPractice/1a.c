//Given a file of integers int the range 1 to n and that each number can occur at the most 3 times,
// Write a linear algorithm in 'c' to sort the and display the numbers in order along with the count

//This method involves bit manipulation

#include<stdio.h>
#include<stdlib.h>
     

int testbit(int A[],int k)
{
    int i=k/16;
    int pos=((k%16)-1)*2;
    unsigned int mask=3;    
    mask=mask << pos;       
    return (A[i] & mask);

}
int getbit(int A[],int k)
{
   int pos=((k%16)-1)*2;
   return  (A[k/16] >> pos) & (1);
}


void  clearbit( int A[],  int k )                
{
    int i=k/16;
    int pos=((k%16)-1)*2;
    unsigned int mask=1;
    mask = mask << pos;
    A[i] = A[i] & ~mask;
}

void setbit(int A[],int k)
{
    int i=k/16;
    int pos=((k%16)-1)*2;
    unsigned int mask=1;
    mask=mask << pos;
    
    int y;
    y=getbit(A,k);
    //check for value of y

    if(y)  //Case of 01
    {
            clearbit(A,k);
            mask =mask << 1;    
    }
    A[i]=A[i] | mask;
}


int main()
{
    int n=10;
    //Give n, and we need 2 bits for each number , this find the size of integers we need
    // For a range of 1 to n , we have n elements and we need n*2 bits and thus (n*2)/8 or n/4 bytes
    // 1 integer has 4 bytes, thus (n/4) bytes we need (n/16)+1 integers
    int size=(n/16)+1;
    int *hm=(int*) calloc(size,sizeof(int));
    int i;
    /*char file[12]="input.txt";
    FILE *ptr;
    ptr=fopen(file,"r");
    if(ptr==NULL)
        exit(0);
    
    while(!feof(ptr))
    {
        fscanf(ptr, "%d", &i);
        printf(" %d\n",i);
        setbit(hm,i);
    }
    fclose(ptr);
    */
    setbit(hm,5);
    setbit(hm,6);
    setbit(hm,6);
    setbit(hm,10); 
     
    printf(" %d\n", hm[0] );
    int c,pos;
    for(i=1;i<=n;i++)
    {
        c=testbit(hm,i);
        pos=((i%16)-1)*2;
        c = c >> pos;   //bring it down to last bit
        if(c!=0)
            printf("%d %d \n",i, c);
    }
  
    free(hm);
    return 0;
}


//Old way to find and print count
 /* int count = 1;
    for(i=0;i<size;i++)
    {
        int x=hm[i];
      
        while(x)
        {
          if(x & 3)  
            printf("%d %d\n",count, x & 3);
          x >>= 2;
          count++;
        }
    } */