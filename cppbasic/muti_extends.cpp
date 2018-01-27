#include<iostream>
using namespace std;
class B{
	public:
		int b;
};
class B1:public B{
	private:
		int b1;
};
class B2:public B{
	private:
		int b2;
};
class C:public B1,public B2{
	public:
		int f(){
			cout<<"Aaaaa"<<endl;
		}
	private:
		int d;
};
int main()
{
	C c;
	c.B1::b=5;
	c.B2::b=10;
	cout<<c.B1::b<<endl;
	cout<<c.B2::b<<endl;
	//cout<<c.b<<endl error c不知道是哪个b 
	return 0;
}




