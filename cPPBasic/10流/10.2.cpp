#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter first sentence followed by Enter\n";
	while((c=cin.get())!='\n') cout.put(c);
	cout<<endl;
	cout<<"Enter second sentence fllowed by Enter\n";
	while( cin.get(c) ){
		if(c=='\n') break;
		else
			cout.put(c);
	}
	cout<<endl;
	cout<<"Enter third sentence followed by Enter\n";
	char s[80];
	cin.get(s,10);
	cout<<s<<endl;
	return 0;
}
