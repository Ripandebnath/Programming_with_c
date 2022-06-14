#include<stdio.h>
void main()
{
    int n,p;
    printf("Enter a number:-\n");
    scanf("%d",&n);
    if(n==1 || n==2)
    {
        printf("not perfect");
    }
    else
    {
         PerfectNumber(n);
    }

}

int PerfectNumber(int x)
{
    int i,s=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            s=s+i;
        }
    }
    if(s==x)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect");
    }
   return 0;
}

