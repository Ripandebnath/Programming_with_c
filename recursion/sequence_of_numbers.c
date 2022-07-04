#include<stdio.h>
int main()
{
    int n,num1,num2;
    printf("Enter total count(from 0m to 9):-\n");
    scanf("%d",&n);
    printf("Enter num1:-\n");
    scanf("%d",&num1);
    printf("Enter num2:-\n");
    scanf("%d",&num2);
    printf("The result are:-\n");
    RepeatMax(n,num1,num2);
}

void RepeatMax(int total,int x,int y)
{
    if(total>=1)
    {
        printf("%d",x);
        RepeatMax(total-1,x,y);
        printf("%d",y);
    }
}
