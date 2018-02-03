#include<iostream>
#include<sstream>
#include<strstream>
using namespace std;
/*
int main(){
	ostringstream output;
	double x,y;
	cout<<"Input x: ";
	cin>>x;
	cout<<"Input y: ";
	cin>>y;
	output<<x<<"*"<<y<<"="<<x*y<<endl;
	cout<<output.str();
	return 0;
}
*/
int main(){
	char buf[80];
	ostrstream  output(buf,sizeof(buf));
	double x,y;
	cout<<"Input x: ";
	cin>>x;
	cout<<"Input y: ";
	cin>>y;
	output<<x<<"*"<<y<<"="<<x*y<<ends;
	cout<<buf<<endl; 
	return 0;
}
