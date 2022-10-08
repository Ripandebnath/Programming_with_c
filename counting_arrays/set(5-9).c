#include<stdio.h>
int main()
{
    int i_arr[8],i_map[5]={0};
    int i;
    printf("Enter some number from 5 to 9");
    for(i=0;i<8;i++){
    scanf("%d",&i_arr[i]);
    }

    for(i=0;i<8;i++)
    {
        i_map[i_map[i]-5]++;
    }

    int mind=0;

    for(i=1;i<5;i++)
    {
       if(i_map[i]>i_map[mind])
        {
            mind=i;
        }
    }
    printf("Maximum repeated number:-%d",i_map[i]);
}
