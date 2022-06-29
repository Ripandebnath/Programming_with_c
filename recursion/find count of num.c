#include<stdio.h>
int main()
{
    int n;
    printf("Enter num from o-9:-");
    scanf("%d",&n);
    int count=findCount(n);
    printf("Total count of numbers that is less than %d are:- %d",n,count);
}

int findCount(int num)
{
    int p;
    printf("Enter a number:-");
    scanf("%d",&p);
    if(p==-1)
    {
        return 0;
    }
    else if(p<num)
        return 1+findCount(num);
    else
        return findCount(num);
}
