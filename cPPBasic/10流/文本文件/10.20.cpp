#include<iostream>
#include<fstream>
using namespace std;
void browseFile(char *,int);
int main(){
	char fileName[80];
	cout<<"������Ҫ�򿪵��ļ���:";
	cin>>fileName;
	browseFile(fileName,1); 
	
	
	return 0;
}
void browseFile(char *fileName,int delLine){
	ifstream inf( fileName, ios::in );
	char s[80];
	for(int i=1; i<=delLine; i++){
		inf.getline(s,80);
	}
	while( !inf.eof() ){
		inf.getline(s,80);//getline��ȡ��û�л��з��� ���ã����ı�����ȡָ���������ַ������ڴ�����ĩ���һ�����ַ�
		cout<<s<<endl;
	}
	inf.close();
}
