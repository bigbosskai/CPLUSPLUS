#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("test3.txt","w");
	if(fp==NULL)
	{
		printf("�ļ��򿪴���!\n");
		exit(1);
	}
	else
	{
		while((ch=getchar())!=EOF)
			fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}