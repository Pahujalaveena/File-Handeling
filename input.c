#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[50];
	FILE *fp;
	fp=fopen("File1.txt","w");
	if(fp==NULL)
	{
		printf("Can not open");
	}
	printf("Enter the string");
	gets(ch);
	fputs(ch,fp);
	fclose(fp);
	getch();
}