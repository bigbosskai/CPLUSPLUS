#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream ost;
	ost.open( "my1.dat" );//Ĭ�ϴ����ı��ļ� 
	ost<<20<<endl;
	ost<<30.5<<endl;
	ost.close();
	
	ifstream ist( "my1.dat" );
	int n;
	double d;
	ist>>n>>d;
	cout<<n<<endl<<d<<endl;
	
	return 0;
}
