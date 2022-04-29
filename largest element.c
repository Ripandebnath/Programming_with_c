#include<stdio.h>
void main()
{
    int n[10];
    int i;
    printf("enter 10 numbers to the array:-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    int p=n[0];
    for(i=0;i<10;i++)
    {
        if(n[i]>p)
            p=n[i];
    }
    printf("largest:-%d",p);
}
