#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20],str2[40];
    int i=0,j=0;
    printf("Enter first string:-\n");
    scanf("%[^\n]%*c",str);
    printf("Enter second string:-\n");
    scanf("%[^\n]%*c",str1);
    printf("After combining the two separate string:-\n");
    while(str[i]!='\0')
    {
        str2[j]=str[i];
        j++;
        i++;
    }
    i=0;
    str2[j]=' ';
    j++;
    while(str1[i]!='\0')
    {
        str2[j]=str1[i];
        j++;
        i++;
    }
    str2[j]='\0';
    printf("\nconnected string:-%s",str2);
return 0;
}
