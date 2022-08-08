#include<stdio.h>

typedef struct Point
{
    int x;
    int y;
}point;

int main()
{
    int i;
    point myArray[10];
    for(i=0;i<5;i++){
    printf("#%d Enter value for x co-ordinate:-",i+1);
    scanf("%d",&myArray[i].x);
    printf("#%d Enter value for y co-ordinate:-",i+1);
    scanf("%d",&myArray[i].y);
    }

    printf("Entered value are:-\n");
    for(i=0;i<5;i++){
    printf("#%dvalue for (x,y) co-ordinate:-(%d,%d)\n",i+1,myArray[i].x,myArray[i].y);
    }
}
