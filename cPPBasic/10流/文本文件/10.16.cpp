#include<iostream>
#include<fstream>
using namespace std;
int main201823103426(){
	char ch;
	ifstream f1( "test" );
	if(!f1){
		cout<<"cannot open test for input.";
		return -1;
	}
	ofstream f2( "testnew" );
	if(!f2){
		cout<<"cannot open testnew for output.";
		return -2;
	}
	while( f1.get(ch) ){
		f2.put(ch);
	}
	f1.close();
	f2.close(); 
}
int main(){
	char str[]="\tNew String";
	ofstream f2( "testnew", ios::app );
	if(!f2){
		cout<<"cannot open testnew for output.";
		return -1;
	}
	f2<<str;
	f2.close();
	return 0;
} 
