#include<stdio.h>
int main()
{
    FILE *fp;
    int count=0;
    char myfile[20],mychar,p;
    printf("Enter your file name:-");
    scanf("%s",myfile);
    printf("\nEnter desired char:-");
    scanf(" %c",&mychar);
    fp=fopen(myfile,"r");
    if(fp!=NULL)
    {

        while(!feof(fp))
        {
            if(fgetc(fp)==mychar)
            {
                count++;
            }
        }
       // fclose(fp);
    }
     printf("\nTOTAL REPEATATION OF THE CHAR ARE %c->%d",mychar,count);
    return 0;
}
