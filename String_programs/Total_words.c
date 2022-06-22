#include<stdio.h>
int main()
{
    char fname[20];
    int count=0,i=0;
    printf("Enter your name:-\n");
    scanf("%[^\n]",&fname);
    while(fname[i]!='\0')
    {
        if(fname[i]==' ')
        {count++;
        }
        i++;
    }
    printf("\nnumber of word are:-%d",count+1);
    return 0;
}
