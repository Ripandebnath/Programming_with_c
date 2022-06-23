int fib(int x);

#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter num:-");
    scanf("%d",&n);
    p=fib(n);
    printf("The fibonacci of %d numbers is:- %d",n,p);
}

int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
        return fib(x-2)+fib(x-1);
}
