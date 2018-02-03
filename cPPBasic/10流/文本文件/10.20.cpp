#include<iostream>
#include<fstream>
using namespace std;
void browseFile(char *,int);
int main(){
	char fileName[80];
	cout<<"请输入要打开的文件名:";
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
		inf.getline(s,80);//getline读取是没有换行符的 作用：从文本中提取指定个数的字符，并在串数组末添加一个空字符
		cout<<s<<endl;
	}
	inf.close();
}
