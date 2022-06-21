#include<stdio.h>
#define MAX_SIZE 10
int main()
{
    int n,arr[MAX_SIZE],i,temp,j,p;
    printf("Enter how many elements you want to enter(Max elements allowed 10):-\n");
    scanf("%d",&n);
    printf("Enter elements in array:-\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Let's Rotate------->\n");
    printf("How many times you want to rotate this array:- ");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        temp=arr[n-1];
        for(j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("After rotation the update array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
