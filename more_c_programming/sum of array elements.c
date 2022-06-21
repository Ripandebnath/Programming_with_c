void array_sum(int *narr ,int);

#include<stdio.h>
#define MAX_SIZE 10
int main()
{
    int n,arr[MAX_SIZE],i,temp,j,p;
    printf("Enter how many elements you want to enter in an array(Max elements allowed 10):-\n");
    scanf("%d",&n);
    printf("Enter elements in array:-\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    array_sum(arr,n);
}

void array_sum(int *narr,int x)
{
    int sum=0,i;
    for(i=0;i<x;i++)
    {
        sum=sum+narr[i];
    }
    printf("Sum of the array is:- %d",sum);
}
