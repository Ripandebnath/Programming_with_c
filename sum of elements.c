#include<stdio.h>
int main()
{
    int arr[20][20],r,c,i,j,sum=0;
    printf("-:Array contained max 20 Row and 20 Column:-\n");
    printf("Enter No Of Row:-");
    scanf("%d",&r);
    printf("Enter No Of Column:-");
    scanf("%d",&c);
    printf("Enter Element For %d row and %d column:-\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements are:-\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Calculating the sum of the all elements:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           sum=sum+arr[i][j];
        }
    }
    printf("Sum of the all elements is:- %d",sum);
    return 0;
}
