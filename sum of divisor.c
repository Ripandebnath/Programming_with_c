#include<stdio.h>
void main()
{
    int n,p;
    printf("Enter a number:-\n");
    scanf("%d",&n);
    SumOfDivisor(n);
}

int SumOfDivisor(int x)
{
    int i,sum=0;
    printf("The divisor are:- \n");
     for(i=1;i<=x;i++)
     {
         if(x%i==0)
         {
             printf("%d\n",i);
             sum=sum+i;
         }
     }

   printf("The sum of the divisor:- %d",sum);
   return 0;
}

