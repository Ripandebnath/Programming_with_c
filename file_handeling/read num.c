#include<stdio.h>
int main()
{
    int i,num,num1;
    FILE *fp;
    fp=fopen("myfile_test.txt","r");

    if(fp!=NULL)
    {
        for(i=1;i<=5;i++){
        fscanf(fp,"%d %d\n",&num,&num1);
        printf("%d-%d\n",num,num1);
        }
    fclose(fp);
    }
  return 0;
}
