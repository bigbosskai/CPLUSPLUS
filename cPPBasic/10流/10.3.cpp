#include<iostream>
#include<iomanip>
using namespace std;
int main201822175737(){
	cout<<"Enter a sentence followed by Enter.\n";
	char s[26];
	cin.getline(s,26);
	cout.write(s,26);
	cout<<endl;
	return 0;
	
}
int main201822180048(){
	char *s="Hello";
	cout.fill('*');
	cout.width(10);
	cout.setf(ios::left);
	cout<<s<<endl;
	
	cout.width( 15 );
	cout.setf(ios::right,ios::left);// 清除左对齐标志位，置右对齐
	cout<<s<<endl;
	return 0;
} 
int main201822180448(){
	int a , b , c ;
   	cout << "please input a in decimal: " ;
   	cin.setf( ios :: dec , ios :: basefield ) ;   cin >> a ;	
   	cout << "please input b in hexadecimal: " ;		
   	cin.setf( ios :: hex , ios :: basefield ) ;   cin >> b ; 	
   	cout << "please input c in octal: " ;
   	cin.setf( ios :: oct , ios :: basefield ) ;    cin >> c ; 	
   	cout << "Output in decimal :\n" ;
   	cout.setf( ios :: dec, ios :: basefield );			
   	cout << "a = " << a << "  b = " << b << "  c = " << c << endl ;
   	cout.setf( ios :: hex , ios :: basefield ) ;		
   	cout << "Output in hexadecimal :\n" ;
   	cout << "a = " << a << "  b = " << b << "  c = " << c << endl ;
   	cout.setf( ios :: oct , ios :: basefield ) ;			
   	cout << "Output in octal :\n" ;
   	cout << "a = " << a << "  b = " << b << "  c = " << c << endl ;
   	return 0;
}

int main201822180935(){
	double x=22.0/7;
	int i;
	cout<<"output in dixed:\n";
	cout.setf(ios::fixed|ios::showpos);
	for(i=1; i<=5; i++){
		cout.precision(i);
		cout<<x<<endl;
	}
	cout<<"output in scientific :\n";
	cout.setf(ios::scientific, ios::fixed|ios::showpos ) ;
	for(i=1; i<=5; i++){
		cout.precision(i);
		cout<<x<<endl;
	}
	return 0;
} 
int main201822181521(){
	int a,b,c;cout<<"please input a in decimal:";
	cin>>dec>>a;
	cout<<"please input b in hexadecimal: ";
	cin>>hex>>b;
	cout<<"please input c in octal: ";
	cin>>oct>>c;
	cout<<"output in decimal:\n";
	cout <<"a = "<<a<<" b = "<<b<<"  c = "<<c<<endl ;
	cout<<"output in hexadecimal: \n";
	cout <<hex<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl ;
	cout<<"output in octal: \n";
	cout <<oct<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl ;
	return 0;
}
int main201822181912(){
	const int k=618;
	cout<<setw(10)<<setfill('#')<<setiosflags(ios::right)<<k<<endl;
	cout<<setw(10)<<setbase(8)<<setfill('*')<< resetiosflags(ios::right) << setiosflags(ios::left) << k << endl ;;
	return 0;
}
