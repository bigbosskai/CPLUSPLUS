#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	int i;
	float f;
	char str1[10],str2[10];
	ifstream in( "test" );
	if(!in){
		cout<<"cannot open file.";
		return -1;
	}
	in>>i>>f>>ch>>str1>>str2;
	cout<<i<<ends<<f<<ends<<ch<<endl;
	in.close();
	
	return 0;
}
