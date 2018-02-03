#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	char fileName[30],name[30];
	int number,score;
	ofstream outstuf;
	cout<<"Please input the name of student file:\n";
	cin>>fileName;
	outstuf.open(fileName, ios::out );
	if(!outstuf){
		cout<<"File could not be open.";
		abort();
	}
	outstuf<<"学生成绩文件\n";
	cout<<"Input the number,name,score:(Enter Ctrl-Z to end input)\n?";
	while(cin>>number>>name>>score){
		outstuf<<number<<' '<<name<<' '<<score<<endl;
		cout<<"?";
	} 
	outstuf.close();
	return 0;
}
