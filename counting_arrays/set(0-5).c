#include<stdio.h>
#include<conio.h>
int main()
{
    int my_array[10];
    int count_array[6]={0};
    int n,i;
    printf("enter no of element in array:-\n");
    scanf("%d",&n);
    printf("Enter elements for(0-5) set:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&my_array[i]);
    }
    for(i=0;i<n;i++)
    {
        count_array[my_array[i]]++;
    }
    printf("count of elements:-\n");
     for(i=0;i<n;i++)
    {
       printf("%d->%d\n",i,count_array[i]);
    }
}
