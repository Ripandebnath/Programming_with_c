#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char mychar;
    fp=fopen("myfile_test.txt","r");
    if(fp!=NULL)
    {
       printf("file reading....\n");
       mychar=fgetc(fp);
       printf("first character :- %c",mychar);
       fclose(fp);
    }
    return 0;
}
