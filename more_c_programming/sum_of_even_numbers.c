#include<stdio.h>
int main()
{
    int n;
    printf("enter num:-");
    scanf("%d",&n);
    printf("sum of even:-%d",sumOfEven(n));
}

int sumOfEven(int p)
{
    int num;
    if(p>=1){
    printf("enter a number:-");
    scanf("%d",&num);
    if(num%2==0)
    {
        return num+sumOfEven(p-1);
    }
    else
        return sumOfEven(p-1);
    }
}
