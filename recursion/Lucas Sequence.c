int rev(int );

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a index:-\n");
    scanf("%d",&n);
    printf("The value of the index %d is %d",n,rev(n));
    return 0;
}


int rev(int x)
{
    if(x==0)
    {
        return 2;
    }
    if(x==1)
    {
        return 1;
    }
    return rev(x-1)+rev(x-2);
}
