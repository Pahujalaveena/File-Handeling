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
	FILE *fp;
	fp=fopen("fwrite.txt","rb");
	if(fp==NULL)
	{
		printf("Can not open");
	}
	while(fread(&s,sizeof(s),1,fp)!=NULL)
	{
		printf("%s %d %f",s.name,s.roll,s.grade);
	}
fclose(fp);
getch();
}