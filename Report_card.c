#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	char studentName[30],section,schoolName[50];
	int class;
	int m,e,h,s,ss;
    printf("enter school name:-\n");
    scanf("%[^\n]%*c",schoolName);
	printf("Enter student name:-\n");
	scanf("%[^\n]%*c",studentName);
	printf("Enter student class:-\n");
	scanf("%d",&class);
	while((getchar())!='\n');
	printf("Enter student section:-\n");
	scanf("%c",&section);
	printf("Enter marks in \n1.Math\n2.English\n3.Hindi\n4.Science\n5.Social science\n");
	scanf("%d%d%d%d%d",&m,&e,&h,&s,&ss);
    int marks=m+e+h+s+ss;
    if(marks>500 || marks<0)
    {
        printf("Incorrect numbers-Program Terminated");
        exit;
    }
    else
    {
	printf("-----------------------------------------------------------\n\n");
	printf("\tAnnual Report Card\t\n\n\n");
	printf("%s\n",schoolName);
	printf("Name: %s\n",studentName);
	printf("Standard: %d\n",class);
	printf("Section: %c\n",section);
	printf("\n");
	printf("Marks Secured Out Of 100\n");
	printf("Mathematics: %d\nEnglish: %d\nHindi: %d\nScience: %d\nSocial Science: %d\n",m,e,h,s,ss);
	printf("\n");
	printf("Total marks secured: %d\n",marks);
	if(marks<200 && marks>=0)
	{
		printf("Grade F");
	}
	else if(marks>=200 && marks<=299)
	{
	printf("Grade E");
	}
	else if(marks>=300 && marks<=349)
		{
		printf("Grade D");
		}
	else if(marks>=350 && marks<=399)
		{
		printf("Grade C");
		}
	else if(marks>=400 && marks<=449)
		{
		printf("Grade B");
		}
	else if(marks>=450 && marks<=500)
		{
		printf("Grade A");
		}
	printf("\n");
	printf("\n");
	printf("-----------------------------------------------------------");
}
return 0;
}
