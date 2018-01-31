#include<iostream>
using namespace std;
/*
class A{
	public:
		~A(){
			cout<<"A::~A() is called.\n"; 
		}
};
class B:public A{
	public:
		~B(){
			cout<<"B::~B() is called.\n";
		}
};
int main(){
	A *ap = new B;
	B *bp = new B;
	cout<<"delete first object:\n";
	delete ap;
	cout<<"delete second object:\n";
	delete bp;
	return 0;
}
*/
class A{
	public:
		virtual ~A(){
			cout<<"A::~A() is called.\n"; 
		}
};
class B:public A{
	public:
		~B(){
			cout<<"B::~B() is called.\n";
		}
};
int main()
{
	A *Ap = new B ;	
    B *Bp2 = new B ;
    cout << "delete first object:\n" ;
    delete Ap;
    cout << "delete second object:\n" ;
    delete Bp2 ;

	return 0;
}










