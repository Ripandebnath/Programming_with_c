#include<stdio.h>
#define MAX_SIZE 10
int main()
{
    int n,arr[MAX_SIZE],i,temp,j,p;
    int count=0,count2=0;
    printf("Enter how many elements you want to enter in an array(Max elements allowed 10):-\n");
    scanf("%d",&n);
    printf("Enter elements in array:-\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++)
  {
    p=arr[i];
    for(j=0;j<n;j++)
    {
        if(p==arr[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("unique element:- %d\n",arr[i]);
        count2++;
    }
    count=0;
  }
  printf("Total no of unique elements are:-%d",count2);
}

