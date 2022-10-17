#include<stdio.h>
int main()
{
    FILE *fp;
    int count=0;
    char myfile[20],myChar;
    printf("Enter your file name:-");
    scanf("%s",myfile);
    fp=fopen(myfile,"r");
    if(fp!=NULL)
    {

        while(!feof(fp))
        {
            myChar=fgetc(fp);
            if(myChar>='a' && myChar<='z')
            {
                count++;
            }
        }
    }
    printf("Total no of lower case character:-%d",count);
    return 0;
}
