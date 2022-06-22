#include<stdio.h>
int main()
{
    char fname[20];
    int count=0,i=0;
    printf("Enter your name:-\n");
    scanf("%[^\n]",&fname);
    while(fname[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%s",fname);
    printf("\nLength of the string is:-%d",count);
    return 0;
}
