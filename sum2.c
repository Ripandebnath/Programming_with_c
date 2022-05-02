#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    int i,sum=0;
    printf("Enter how many number you want to do sum:- ");
    scanf("%d",&n);
    ptr=(int)malloc(n*sizeof(int)); //DMA=Dynamic Memory Allocation
    if(ptr==NULL)
    {
        printf("memory didn't allocated program terminated:-\n");
        exit(0);
    }
    else
    {
        printf("enter numbers:-");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("sum of the enter numbers is:-");
        for(i=0;i<n;i++)
        {
            sum=sum+ptr[i];
        }
        printf("sum:- %d",sum);
    }
    return 0;
}
