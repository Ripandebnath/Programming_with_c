 #include<stdio.h>
 typedef struct point
 {
     int x;
     int y;
 }point;

 int showInput(point p1)
 {
     printf("value of x:-%d\n",p1.x);
     printf("value of y:-%d",p1.y);
 }

 point takeInput()
 {
     point p1;
     printf("Enter value of x:-");
     scanf("%d",&p1.x);
     printf("Enter value of y:-");
     scanf("%d",&p1.y);
     return p1;
 }

 int main()
 {
  point p=takeInput();
  printf("Values Before:-\n");
  showInput(p);
  p.x=p.x+1;
  p.y=p.y+1;
  printf("\nValues after:-\n");
  showInput(p);
 }
