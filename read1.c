#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[50];
	FILE *fp;
	clrscr();
	fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		printf("Can not open");
	}
	while(fgets(ch,49,fp)!=NULL)
	{
		printf("%s",ch);
	}
	fclose(fp);
	getch();
}