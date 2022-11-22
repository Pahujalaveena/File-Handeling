#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("File.txt","w");
    if(fp==NULL)
    {
        printf("can not open!");
    }
    fclose(fp);
}