#include<stdio.h>
#include<conio.h>
typedef union Student
{
     int id;
     float salary;
}student;

int main()
{
    student student1;
    student1.id=1;
    student1.salary=20500;
    printf("%.f\n",student1.salary);
}
