#include<iostream>
#include<math.h>
using namespace std;
class Simple
{
	int x,y;
	public:
		Simple();
		~Simple();
		void setXY(int a,int b){
			x=a;
			y=b;
		}
		void constFun()const {
			//x++;//会报错 
			//y++;
		}
};
Simple::Simple(){
	cout<<"Object initialize"<<endl;
}
Simple::~Simple(){
	cout<<"Object destory"<<endl;
}
int main2018126151753(){
	Simple *p;
	p = new Simple;
	p->setXY(1,2);
	delete p;
	return 0;
}
class A{
	public:
		A(int x):a(x){}
		int a;
}; 
class B{
	public:
		B(int x,int y):aa(x),b(y){}
		void out(){
			cout<<"aa="<<aa.a<<" b="<<b<<endl;
		}
	private:
		int b;
		A aa;
};
int main2018126153358(){
	B ob(1,2);
	ob.out();
	return 0;
}
class Location{
	public:
		Location(int xx=0,int yy=0){
			X=xx;
			Y=yy;
			cout<<"Object constructed"<<endl;
		}
		~Location(){
			cout<<"Object destory"<<endl;
		}
		Location(const Location &p){
			X=p.X;
			Y=p.Y;
			cout<<"Copy constructed"<<endl;
		}
	private: 
		int X,Y;
}; 
Location g(){
	Location local(1,2);
	return local;
}
int main2018126154505(){
	Location A;
	A = g();//这里执行的是A = 匿名对象是一个等号操作 
	return 0;
}
/*
class Point{
	private:
		double x,y;
	public:
		
		Point(double x=0,double y=0){
			this->x=x;
			this->y=y;
		}
		~Point(){}
		friend double distance(Point &a,Point &b);
}; 
double distance(Point &a,Point &b){
	double dx=a.x-b.x;
	double dy=a.y-b.y;
	return sqrt( dx*dx + dy*dy );
}
int main(){
	Point a(1.0,0);
	Point b(0,1.0);
	dis = distance(a,b);
	//cout<<distance(a,b)<<endl;
	return 0;
}
*/
class Point{
	public:
		Point(double xi,double yi){
			X=xi;
			Y=yi;
		}
		double GetX(){
			return X; 
		}
		double GetY(){
			return Y;
		}
		friend double Distance(Point &a,Point &b);
	private:
		double X,Y;
};
double Distance(Point &a,Point &b){
	double dx=a.X-b.X;
	double dy=a.Y-b.Y;
	return sqrt( dx*dx + dy*dy );
}
int main2018126160156(){
	Point p1(3.0,5.0);
	Point p2(4.0,6.0);
	double d=Distance(p1,p2);
	cout<<d<<endl;
}
//friend class
class AA{
	friend class BB;
	public:
		void Display(){
			cout<<x<<endl;
		}
	private:
		int x;
}; 
class BB{
	public:
		void Set(int i){
			object.x=i;
		}
		void Display(){
			object.Display();
		}
	private:
		AA object;
};
int main(){
	BB bobject;
	bobject.Set(100);
	bobject.Display();
	return 0;
}
