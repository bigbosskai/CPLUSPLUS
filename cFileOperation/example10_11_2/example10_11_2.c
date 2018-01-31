#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fpr,*fpw;
	char ch;
	switch(argc)
	{
	case 2:
		//���ļ�����Ϣ�����stdout
		fpr=fopen(argv[1],"r");
		if(fpr==NULL){
			printf("�ļ�%s��ʧ��!\n",argv[1]);
			exit(1);
		}
		while((ch=fgetc(fpr))!=EOF){
			putc(ch,stdout);
		}
		fclose(fpr);
		break;
	case 3:
		//���ļ�1�е�����д���ļ�2��ȥ
		fpr=fopen(argv[1],"r");
		if(fpr==NULL){
			printf("�ļ�%s��ʧ��!\n",argv[1]);
			exit(1);
		}
		fpw=fopen(argv[2],"w+");
		if(fpw==NULL){
			printf("�ļ�%s��ʧ��!\n",argv[2]);
			exit(1);
		}
		while((ch=fgetc(fpr))!=EOF){
			fputc(ch,fpw);
		}
		fclose(fpr);
		fclose(fpw);
		break;
	default:
		printf("������������!\n");
		break;
	}
	return 0;
}