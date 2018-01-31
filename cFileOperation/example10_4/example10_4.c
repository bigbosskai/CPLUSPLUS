#include<stdio.h>
#include<stdlib.h>
int main01()
{
	char w[81];
	printf("请输入:");
	fgets(w,81,stdin);
	printf("您输入的是:%s",w);
	return 0;
}