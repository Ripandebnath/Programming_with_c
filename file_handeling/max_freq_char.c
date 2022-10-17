#include<stdio.h>
int main()
{
    FILE *fp;
    int count=0,i;
    int y=0;
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

    for(i=1;i<26;i++)
   {
      if(countL[y]<countL[i])
        y=i;
   }
   printf("\n\nThe character that is repeated most is:-%c and %d times",y+'a',countL[y]);
    return 0;
}
