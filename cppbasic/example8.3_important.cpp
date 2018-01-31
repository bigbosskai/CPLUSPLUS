#include<iostream>
using namespace std;
/* 
class Base{
	public:
		Base(char xx){
			x=xx;
		}
		void who(){
			cout<<"Base Class:"<<x<<endl;
		}
	protected:
		char x;
};
class First_d: public Base{
	public:
		First_d(char xx,char yy):Base(xx){
			y=yy;
		}
		void who(){
			cout<<"First_d derived class:"<<x<<","<<y<<endl;
		}
	protected:
		char y;
};
class Second_d:public First_d{
	public:
		Second_d(char xx,char yy,char zz):First_d(xx,yy){
			z=zz;
		}
		void who(){
			cout<<"Second_d derived class:"<<x<<","<<y<<","<<z<<endl;
		}
	protected:
		char z;
};
int main(){
	Base B_obj('A');
	First_d F_obj('T','O');
	Second_d S_obj('E','N','D');
	Base *p;
	//p=&B_obj;
	//p->who(); Base class:A
	//p=&F_obj;
	//p->who(); Base class:T
	//p=&S_obj;
	//p->who(); Base class:E
	
	//F_obj.who();//First_d derived class:T,O
	p=&S_obj;
	((First_d *)p)->who();//Second_d derived class:E,N,D
	
	//conclusion:从父类 指针只能访问从父类继承的成员 
	return 0;
}
*/

class Base{
	public:
		Base(char xx){
			x=xx;
		}
		virtual void who(){//派生类的重定义版本默认为虚函数 
			cout<<"Base Class:"<<x<<endl;
		}
	protected:
		char x;
};
class First_d: public Base{
	public:
		First_d(char xx,char yy):Base(xx){
			y=yy;
		}
		void who(){
			cout<<"First_d derived class:"<<x<<","<<y<<endl;
		}
	protected:
		char y;
};
class Second_d:public First_d{
	public:
		Second_d(char xx,char yy,char zz):First_d(xx,yy){
			z=zz;
		}
		void who(){
			cout<<"Second_d derived class:"<<x<<","<<y<<","<<z<<endl;
		}
	protected:
		char z;
};
int main(){
	Base  B_obj( 'A' ) ;   
	First_d F_obj( 'T', 'O' ) ;  
	Second_d S_obj( 'E', 'N', 'D' ) ;
	Base *p;
	First_d *pf;
	p=&B_obj;
	p->who(); //Base class:A
	p=&F_obj;
	p->who(); //First_d derived class:T,O
	pf=&S_obj;
	pf->who(); //Second_d derived class:E,N,D
	
	return 0;
}

