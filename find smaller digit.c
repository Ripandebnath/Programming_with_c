#include<stdio.h>
void main()
{
    int n,p;
    printf("enter a number:-\n");
    scanf("%d",&n);
    printf("enter digit:-");
    scanf("%d",&p);
    maxNum(n,p);
}

int maxNum(int x,int y)
{
    int arr[10],j;
    float sum=0,s;
    int i=0,count=0;
   while(x!=0)
   {
       int rem=x%10;
       if(rem<y)
       {
           arr[i]=rem;
           count++;
           i++;
       }
       x=x/10;
   }
   printf("the number that is smaller than %d:-\n",y);
   for(j=0;j<count;j++)
   {
       printf("%d\t",arr[j]);
       sum=sum+arr[j];
   }
   printf("\nsum:- %f\n",sum);
   printf("count:-%d",count);
   float T;
   s=count;
   T=sum/s;
   printf("\navg is:-%f\n",T);
   return 0;
}

