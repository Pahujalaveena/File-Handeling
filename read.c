#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	FILE *fp;
	clrscr();
	fp=fopen("writing.text","r");
	if(fp==NULL)
	{
		printf("Can not open");
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	fclose(fp);
	getch();
	}
}