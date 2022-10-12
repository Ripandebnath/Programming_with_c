#include<stdio.h>
int main()
{
    int arr_s[20],i,n,p;
    printf("Enter how many element you want to add:-");
    scanf("%d",&n);
    printf("\nEnter elements in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr_s[i]);
    }
    printf("Enter elements are:-\n");
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d",arr_s[i]);
    }
    printf("]");
    printf("\nEnter how many elements you want to delete:-");
    scanf("%d",&p);
    printf("\nCurrent array after deletion:\n");
    printf("[");
    for(i=0;i<n-p;i++)
    {
        printf("%d",arr_s[i]);
    }
    printf("]");
}
