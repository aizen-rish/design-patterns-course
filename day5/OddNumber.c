#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define N 10    //range of values

int main()
{
    int size=(N/32) + 1; 
    int *hm=(int*) calloc(size,sizeof(int));
    int i;
    
    char file[12]="input1.txt";
    FILE *ptr;
    ptr=fopen(file,"r");
   
    if(ptr==NULL)
        {printf(" Fail to open file");exit(0);}
    
    while(!feof(ptr))
    {
        fscanf(ptr, "%d", &i);
        //printf(" %d\n",i);
        hm[i/32] = hm[i/32] ^ (1 << (i%32));
    }
    fclose(ptr);
    
    for(i=0;i<size;i++)
    {
        printf("\n%d ",hm[i]);
        if(hm[i]!=0)
        {
            int ans = log2(hm[i]) + (32*i);
            printf(" %d",ans);
        }
    }
    free(hm);
    return 0;
}