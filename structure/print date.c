#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date mydate;
    mydate.day=20;
    mydate.month=5;
    mydate.year=2007;
    printf("date=%d/%d/%d",mydate.day,mydate.month,mydate.year);
    return 0;
}
