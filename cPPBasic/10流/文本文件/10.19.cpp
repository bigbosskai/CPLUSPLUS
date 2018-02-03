#include<iostream> 
#include<fstream>
#include<cstdlib>
using namespace std;
//¶Á¸Õ²ÅµÄstu.dat
int main(){
	char name[30],s[80];
	int number,score;
	int n=0,max,min,total=0;
	double ave;
	ifstream instuf( "stu.dat" ,ios::in );
	if(!instuf){
		cout<<"File could not be open.";
		abort();
	}
	instuf.getline(s,80);
	while(instuf>>number>>name>>score){
		cout<<number<<'\t'<<name<<'\t'<<score<<endl;
		if(n==0){
			max=min=score;
		}
		else{
			if(score>max) max=score;
			if(score<min) min=score;
		}
		total+=score;
		n++;
	}
	ave=double(total)/n;
	cout<<"maximal is:"<<max<<endl<<"minimal is:"<<min<<endl<<"average is:"<<ave<<endl;
	instuf.close();
	return 0;
} 
