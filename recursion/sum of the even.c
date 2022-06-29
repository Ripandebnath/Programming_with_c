#include<stdio.h>
int main()
{
    int sum=findCount();
    printf("\nTotal sum of the even numbers is:- %d",sum);
}

int findCount()
{
    int p;
    printf("Enter a number: ");
    scanf("%d",&p);
    if(p==-1)
    {
        return 0;
    }
    else if(p%2==0)
    {
        return p+findCount();
    }
    else
        return findCount();
}
