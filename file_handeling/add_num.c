#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=5;
    float num2=9.5;
    FILE *fp;
    fp=fopen("myfile_test.txt","w");
    if(fp!=NULL)
    {
      fprintf(fp,"%d %f",num,num2);
      fclose(fp);
    }
    return 0;
}
