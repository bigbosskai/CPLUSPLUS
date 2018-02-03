#include<iostream>
#include<fstream>
using namespace std;
/*
int main(){
	char buf[80];
	cin.get(buf, 80 ,'y');
	cout<<buf<<endl;//Óöµ½y¾Í½áÊø
	cin.get(buf,80);
	cout<<buf<<endl;
	
	cin.getline(buf ,80,'n');
	cout<<buf<<endl; 
	cin.get(buf,80);
	cout<<buf<<endl;
	return 0;
}
*/
int main(){
	ifstream inf( "testnew" );
	char buf[80];
	inf.getline(buf,80);
	cout<<buf<<"______"<<inf.gcount()<<endl;
	inf.get(buf,80);
	cout<<buf<<"______"<<inf.gcount()<<endl;
	inf.close();
	
	return 0;
}
