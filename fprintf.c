#include<stdio.h>
#include<conio.h>
void main()
{
	   struct emp
	   {
	   	    int id;
	   	    char name;
	   	    float salary;
	   };
	   struct emp e;
	   FILE *fp;
	   char ch='y';
	   fp=fopen("fprintf.txt","w");
	   if(fp==NULL)
	   {
	   	printf("Can not open");
	   }
	   while(ch=='y')
	   {
	   	printf("Enter the name, age and salary of the employee");
	   	scanf("%s \t %d \t %f",e.name,e.id,e.salary);
	   	fprintf(fp,"%s \t %d \t %f",e.name,e.id,e.salary);
	   	printf("Do you want to enter another record (y/n)");
	   	ch=getche();
fclose(fp);
getch();
	   }
}