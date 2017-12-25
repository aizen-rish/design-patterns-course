//Given a file of integers int the range 1 to n and that each number can occur at the most 3 times,
// Write a linear algorithm in 'c' to sort the and display the numbers in order along with the count

//THis solution involves using auxiallry space 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=10;
    char file[12]="input.txt";
    FILE *ptr;
    ptr=fopen(file,"r");
    if(ptr==NULL)
        exit(0);
    int i;
    int *hm=(int*) calloc(n,sizeof(int));
    while(!feof(ptr))
    {
        fscanf(ptr, "%d", &i);
        hm[i-1]++;
    }
    fclose(ptr);
    for(i=0;i<n;i++)
      if(hm[i]!=0 ) {printf(" %d %d\n",i+1,hm[i]);} 
    return 0;
}