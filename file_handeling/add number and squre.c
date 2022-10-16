#include<stdio.h>
int main()
{
    int i,p;
    FILE *fp;
    fp=fopen("myfile_test.txt","w");

    if(fp!=NULL)
    {
        printf("Enter upto how many element you want:-\n");
        scanf("%d",&p);
        printf("DONE!!!Open Your file..");
        for(i=1;i<=p;i++){
        fprintf(fp,"%d %d\n",i,i*i);
        }
    fclose(fp);
    }

}
