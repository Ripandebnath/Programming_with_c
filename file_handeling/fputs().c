#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("myfile_test.txt","w");
    if(fp!=NULL)
    {
      printf("File saving....");
      fputs("Ripan\n",fp); //sentense will get saved in file
      fputs("Debnath",fp);
      fclose(fp);
    }
    return 0;
}
