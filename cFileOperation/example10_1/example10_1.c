#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("a.txt","w");
	if(fp==NULL)
	{
		printf("�ļ��򿪴���!\n");
		exit(1);
	}
	else
	{
		printf("�ļ�������!\n");
	}
	fclose(fp);
	return 0;
}