#include<iostream>
using namespace std;
int main01(){
	int *p=new int(89);//初始化的值是89 int *p=new int[89]; 
	cout<<*p<<endl;
	return 0;
}
int main2018126143649(){
	int *p=NULL,*t;int i;
	p=new int[10];
	if(!p){
		cout<<"allocation failure\n";
	}
	for(i=0;i<10;i++){
		p[i]=100+i;
	}
	for(t=p;t<p+10;t++){
		cout<<*t<<" ";
	}
	cout<<endl;
	delete [] p;
}
void App(int* &pa,int n){
	pa = new int[n];
	if(!pa){
		cout<<"allocation failure\n";
	}
	for(int i=0;i<n;i++)
		pa[i]=0;
}
int main2018126144143(){
	int *ary=NULL,*t,i,n;
	cout<<"n=";
	cin>>n;
	App(ary,n);
	for(i=0;i<n;i++){
		ary[i]=10+i;
		cout<<ary[i]<<" ";
	}
	cout<<endl;
	delete [] ary;
	return 0;
} 
void yhtriangle(int *const py,int pn){
	int i,j;
	py[0]=1;
	for(i=1;i<pn+1;i++){
		py[i]=1;
		for(j=i-1;j>0;j--){
			py[j]=py[j-1]+py[j];
		}
	}
}
int main(){
	int n,*yh;
	do{
		cout<<"Please input power:";
		cin>>n;
	}while(n<0||n>20);
	yh = new int[n+1];
	yhtriangle(yh,n);
	for(int i=0;i<n+1;i++) {
		cout<<yh[i]<<" ";
	}
	cout<<endl;
	return 0;
} 
