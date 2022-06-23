#include<stdio.h>
void copyS(char *myName);

int main()
{
    char fname[20];
    int count=0,i=0;
    printf("Enter your name:-\n");
    scanf("%[^\n]",&fname);
    printf("first string:-%s\n",fname);
    printf("After copy the name to another string:-\n");
    copyS(fname);
    return 0;
}

void copyS(char *myName)
{
    char copyName[20];
    int i,count=0;
    for(i=0;myName[i]!='\0';i++)
    {
    copyName[i]=myName[i];
    count++;
    }
    copyName[i]='\0';
    printf("second string:-%s",copyName);
}


