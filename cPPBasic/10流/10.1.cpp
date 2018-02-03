#include<iostream>
using namespace std;
void fn(int a,int b){
	if(b==0){
		cerr<<"Zero encoutered The message cannot bere directed.\n";
	}
	else
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
int main(){
	int m,n;
	cout<<"one:\n";
	cin>>m>>n;
	fn(m,n);
	cerr<<"two:\n";
	fn(20,0);
	return 0;
}
