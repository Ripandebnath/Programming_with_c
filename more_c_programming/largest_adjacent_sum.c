
#include<stdio.h>
#define MAX_SIZE 10
int main()
{
    int n,arr[MAX_SIZE],arr2[MAX_SIZE],i,count;

    printf("Enter how many elements you want to enter:-\n");
    scanf("%d",&n);
    printf("enter elements in array:-");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int sum=arr[0];
    int sum2,temp;;
    for(i=0;i<n;i++)
    {
        sum2=arr[i]+arr[i+1];
        if(sum<sum2)
        {
            temp=sum;
            sum=sum2;
            sum2=temp;
        }
    }
    printf("The largest adjacent sum:-%d",sum);
}
