#include<iostream> 
using namespace std;
class A{
	public:
		A(){
			x=1;
		}
		int out(){
			return x;
		}
		void addX(){
			x++;
		}
	private:
		int x;
};
class B:public A{
	public:
		B(){
			y=1;
		}
		int out(){
			return y;
		}
		int addY(){
			y++;
		}
	private:
		int y;
};
int main(){
	A a;
	cout<<"a.x="<<a.out()<<endl;
	B b;
	cout<<"b.y="<<b.out()<<endl;
	b.addX();
	cout<<"b.x="<<b.A::out()<<endl;
	return 0;
}
