#include<stdio.h>
#include<conio.h>
typedef union Student
{
     int id;
     float salary;
}student;

int main()
{
    int i;
    student student1[10];
    for(i=0;i<3;i++)
    {
        printf("Enter student %d:-",i+1);
        scanf("%d",&student1[i].id);
    }
    for(i=0;i<3;i++)
    {
        printf("Student %d:-%d\n",i+1,student1[i].id);
    }
}
