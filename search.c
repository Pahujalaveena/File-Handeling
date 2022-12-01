#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int roll;
		char name[50];
		float grade;
	};
	struct student s;
	int roll,flag=0;
	FILE *fp;
	fp=fopen("demo.txt","rb");
	if(fp==NULL)
	{
		printf("can not open");
	}
	printf("Enter the roll no grade of student which you want to search");
	scanf("%d",&roll);
	while(fread(&s,sizeof(s),1,fp)>0 && flag==0)
	{
		if(s.roll==roll)
		{
			flag=1;
			printf("Record is found\n");
			printf("%s %d %f",s.name,s.roll,s.grade);
		}
	}
if(flag==0)
{
	printf("Not found");
}
fclose(fp);
}