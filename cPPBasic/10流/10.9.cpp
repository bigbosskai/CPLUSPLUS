#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x=22.0/7;
	int i;
	cout<<"output in fixed:\n";
	cout<<setiosflags(ios::fixed|ios::showpos);
	for(i=1; i<=5; i++){
		cout<<setprecision(i)<<x<<endl;
	}
	cout<<"output in scientific:\n";
	cout << resetiosflags( ios::fixed | ios::showpos )<< setiosflags( ios::scientific ) ;
	for(i=1; i<=5; i++){
		cout<<setprecision(i)<<x*1e5<<endl;
	}
	return 0;
}
