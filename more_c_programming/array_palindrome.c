

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
    int j=0;
    count=0;
    while(n>0)
    {

        if(arr[j]==arr[n-1])
        {
        count=0;
        count++;
        j++;
        n--;
        }
        else{
            count=0;
            printf("not palindrome");
            break;
            }
    }
    if(count==1)
    {
        printf("palindrome");
    }

}
