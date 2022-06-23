int sum(int x);

#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter num:-");
    scanf("%d",&n);
    p=sum(n);
    printf("The fibonacci of %d numbers is:- %d",n,p);
}

int sum(int x)
{
    if(x<10)
    {
        return x;
    }
    else
    {
        return x%10+sum(x/10);
    }

}
