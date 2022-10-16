#include<stdio.h>
int main()
{
   FILE *fp;

   fp=fopen("myfile_test.txt","r");

   if(fp==NULL)
   {
       printf("file not found");
   }
   else
   {
       printf("file found!! and it's ready to read");
   }
  fclose(fp);

  return 0;
}
