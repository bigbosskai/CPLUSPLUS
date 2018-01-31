#include<stdio.h>
#include<string.h>
struct stu
{
	int num;//4
	char name[20];//20
	char sex;//1
	int age;//4
	float score;//4
	char address[30];//30
};
struct ty
{
	char string[15];
}a,b;
struct _a
{
	int a;
	char b[3];

};

int main02()
{
	printf("float=%d\n",sizeof(float));
	printf("%d\n",sizeof(struct stu));
	strcpy(a.string,"aaaaaa");
	printf("a: %s\n",a.string);
	b=a;
	printf("b: %s\n",b.string);
	printf("打印a和b的地址:\n a:%x\nb:%x\n",a.string,b.string);
	printf("b: %s\n",b.string);
	return 0;
}
int main03(){
	printf("%d\n",sizeof(double long));
	printf("%d\n",sizeof(struct _a));
	return 0;
}

int main()
{
	struct stu a;
	char *p=(char*)(&a);
	a.sex='A';
	a.age=15;
	*(p+25)='B';
	printf("%c\n",*(p+24));
	printf("%c\n",*(p+25));
	printf("%d\n",a.age);
	printf("%d\n",sizeof(struct stu));
	return 0;
}