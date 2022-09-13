#include<stdio.h>
#include<conio.h>
int main()
{
    int my_array[10];
    int count_array[10]={0},max_n=0;
    int n,i;
    printf("enter no of element in array:-\n");
    scanf("%d",&n);
    printf("Enter elements for(0-9) set:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&my_array[i]);
    }
    for(i=0;i<n;i++)
    {
        count_array[my_array[i]]++;
    }

    printf("Finding which number having the maximum repeats:-\n");
    for(i=0;i<10;i++)
    {
       if(count_array[i]>count_array[max_n])
        {
            max_n=i;
        }
    }
    printf("maximum repetition\n");
    printf("%d->%d",max_n,count_array[max_n]);
}
