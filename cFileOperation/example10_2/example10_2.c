#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("example10_2.c","r");
	if(fp==NULL)
	{
		printf("文件打开错误!\n");
		exit(1);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
			putchar(ch);
	}
	fclose(fp);
	return 0;
}