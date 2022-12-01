#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch='y';
	
	     struct student
	     {
	     	int roll_no;
	     	char grade;
	     	char name[50];
		 };
		 struct student s;
		 fp=fopen("fwrite.txt","w");
		 if(fp==NULL)
		 {
		 	printf("Can not open");
		 }
	while(ch=='y')
	{
		printf("Enter the name grade and roll no of a student");
		scanf("%s %c %d",s.name,s.grade,s.roll_no);
		fwrite(&s,sizeof(s),1,fp);
		printf("Do yo want to enter another record (y/n)");
		ch=getche();
	}
fclose(fp);
getch();
}