#include<fstream>
#include<iomanip>
using namespace std;
int main(){
	ofstream ost;
	ost.open( "my2.dat" );
	ost<<"1234567890"<<endl;
	int a=123;
	ost<<a<<endl;
	ost<<setw(10)<<a<<endl;
	ost<<resetiosflags(ios::right)<<setiosflags(ios::left)<<setfill('#')<<setw(10)<<a<<endl;
	ost << resetiosflags ( ios :: left ) << setiosflags ( ios :: right )
        << setprecision ( 5 ) << setw ( 10 ) << 12.34567890 << endl ;
   	ost . close ( ) ;

	
	return 0;
}
