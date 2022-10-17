#include<stdio.h>
int main()
{
    FILE *fp;
    int count=0,i;
    char myfile[20],myChar,countL[26]={0};
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
                countL[myChar-'a']++;
            }
        }
    }
    printf("Total no of lower case character:-%d\n",count);
   for(i=0;i<26;i++)
   {
       printf("character %c appears =%d times\n",i+'a',countL[i]);
   }
    return 0;
}
