#include<stdio.h>
int main()
{
    FILE *fp;
    char mychar;
    int count=0;
    fp=fopen("myfile_test.txt","r");
    while((mychar=fgetc(fp))!=EOF)
    {
        count++;
    }
    printf("Total no of character:- %d",count);
}
