#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fpr,*fpw;
	char ch;
	switch(argc)
	{
	case 2:
		//就文件的信息输出到stdout
		fpr=fopen(argv[1],"r");
		if(fpr==NULL){
			printf("文件%s打开失败!\n",argv[1]);
			exit(1);
		}
		while((ch=fgetc(fpr))!=EOF){
			putc(ch,stdout);
		}
		fclose(fpr);
		break;
	case 3:
		//就文件1中的内容写到文件2中去
		fpr=fopen(argv[1],"r");
		if(fpr==NULL){
			printf("文件%s打开失败!\n",argv[1]);
			exit(1);
		}
		fpw=fopen(argv[2],"w+");
		if(fpw==NULL){
			printf("文件%s打开失败!\n",argv[2]);
			exit(1);
		}
		while((ch=fgetc(fpr))!=EOF){
			fputc(ch,fpw);
		}
		fclose(fpr);
		fclose(fpw);
		break;
	default:
		printf("参数输入有误!\n");
		break;
	}
	return 0;
}