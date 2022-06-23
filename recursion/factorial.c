int fact(int x);

#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter num:-");
    scanf("%d",&n);
    p=fact(n);
    printf("The factorial of %d numbers is:- %d",n,p);
}

int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
        return x*fact(x-1);
}
