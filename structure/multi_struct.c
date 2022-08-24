#include<stdio.h>
typedef struct Point
{
    int x;
    int y;
}Point;

typedef struct Circle
{
    Point center;
    double radius;
}circle;

int main()
{
    int x,y;
    circle c1;
    printf("enter point of x:-");
    scanf("%d",&c1.center.x);
    printf("Enter point of y:-");
    scanf("%d",&c1.center.y);
    printf("Enter radius:-");
    scanf("%d",&c1.radius);
    printf("GIVEN:-\n1)x:-%d\n2)y:-%d\n3)Radius:-%d",c1.center.x,c1.center.y,c1.radius);
}
