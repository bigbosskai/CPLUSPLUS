#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("a.txt","w");
	if(fp==NULL)
	{
		printf("文件打开错误!\n");
		exit(1);
	}
	else
	{
		printf("文件正常打开!\n");
	}
	fclose(fp);
	return 0;
}