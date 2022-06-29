int findCount(char);
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char n;
    printf("Enter default character:-");
    scanf("%c",&n);
    //findCount(n);
    int count=findCount(n);
    printf("Total count of numbers that equal to %c are:- %d",n,count);
    return 0;
}
int findCount(char input)
{
    char p;
    printf("Enter a character:-");
    scanf(" %c",&p);
    getchar();
    printf("%c\n",p);
    if(p=='$')
    {
        return 0;
    }
    if(p==input)
    {
        return 1+findCount(input);
    }
    return findCount(input);
}
