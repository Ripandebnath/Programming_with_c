#include<stdio.h>
int main()
{
    FILE *fp;
    char mychar;
    int count=1;
    fp=fopen("myfile_test.txt","r");
    if(fp!=NULL){
    while((mychar=fgetc(fp))!=EOF)
    {
        if(mychar=='\n')
        {count++;}
    }
    fclose(fp);
    printf("Total no of line:- %d",count);
    }
}
