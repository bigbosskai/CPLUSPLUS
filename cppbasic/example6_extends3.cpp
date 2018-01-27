#include<iostream> 
using namespace std;
class A{
	public:
		int a1,a2;
		A(int a=0,int b=0){
			a1=a;a2=b;
		}
		void print(){
			cout<<"a1="<<a1<<"a2="<<a2<<endl;
		}
};
class B:public A{
	public:
		int b1,b2;
		B(int a=1,int b=1){
			b1=a;
			b2=b;
		}
		void print(){
			cout<<"b1="<<b1<<"b2="<<b2<<endl;
		}
		void printAB(){
			A::print();
			print();
		}
};
int main(){
	B b;
	b.A::print();
	b.printAB();
	return 0;
}
