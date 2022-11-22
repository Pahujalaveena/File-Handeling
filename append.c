#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	FILE *fp;
	fp=fopen("Append.txt","a");
	if(fp==NULL)
	{
		printf("Can not open");
	}
	printf("Enter the string");
	gets(s);
	fputs(s,fp);
	fclose(fp);
	getch();
}