#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[50]={"My name is Laveena Pahuja."};
	fp=fopen("writing.text","r");
	if(fp==NULL)
	{
		printf("Can not open");
	}
	for(int i=0;i<strlen(ch);i++)
	{
		fputs(ch[i],fp);
	}
	fclose(fp);
}