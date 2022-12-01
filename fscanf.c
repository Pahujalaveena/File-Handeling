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
	   fp=fopen("Fprintf,txt","r");
	   if(fp==NULL)
	   {
	   	printf("Can not open");
	   }
	   while(fscanf(fp,"fp,%d %s %f",e.name,&e.id,&e.salary)!=EOF)
	   {
	   	printf("%s %d %f",e.name,e.id,e.salary);
	   }
fclose(fp);
getch();
}