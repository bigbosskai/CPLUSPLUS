#include<iostream>
using namespace std;
class Point{
	friend ostream& operator<<(ostream &,const Point &);
	public:
		Point(int a=0,int b=0){
			x=a;
			y=b;
		}
		void setPoint(int x,int y){
			this->x=x;
			this->y=y;
		}
		int getX() ;
	protected:
		int x;
		int y;
};
ostream &operator<< ( ostream &output , const Point &p )
{ output << "[" << p.x << "," << p.y << "]"<<endl ;
     return output ;
}
class Circle:public Point{
	friend ostream& operator<<(ostream&,const Circle&);
	public:
		Circle(double r,int x=0,int y=0):Point(x,y){
			radius=r;
		}
		void setRadius(double a){
			radius=a;
		}
		double area();
	protected:
		double radius;
};
double Circle::area(){
	return 3.14159*radius*radius;
}
ostream& operator<<(ostream& output,const Circle& c){
	 output << "[" << c.x << "," << c.y << "]"  ;
	 output<<"radius="<<c.radius<<endl;
     return output ;
}
class Cylinder:public Circle{
	friend ostream& operator<<(ostream&,const Cylinder&);
	public:
		Cylinder(double h=0.0,double r=0.0,int x=0,int y=0):Circle(r,x,y){
			height=h;
		}
		void setHeight(double h){
			height=h;
		}
		double area(){
			return 2*3.14159*radius*height;
		}
		double volume(){
			return Circle::area()*height;
		}
	protected:
		double height;
};
int main()
{ Point p ( 72, 115 ) ;		//�������󲢳�ʼ��
   cout << "The initial location of p is " << p << endl ;
   p.setPoint ( 10, 10 ) ;		//�õ��������ֵ
   cout << "\nThe new location of p is " << p << endl ;	//�������
   Circle c ( 2.5, 37, 43 ) ;	//����Բ���󲢳�ʼ��
   cout<<"\nThe initial location and radius of c are\n"<<c<<"\nArea = "<<c.area()<<"\n" ;
   //��Բ��������ֵ
   c.setRadius ( 4.25 ) ;    c.setPoint ( 2, 2 ) ;
   //���Բ�������Բ���
   cout<<"\nThe new location and radius of c are\n"<<c<<"\nArea = "<<c.area()<< "\n" ;
   Cylinder cyl ( 5.7, 2.5, 12, 23 ) ;	//����Բ������󲢳�ʼ��
   //���Բ��������ݺͱ���������
   cout << "\nThe initial location, radius ang height of cyl are\n" << cyl
      << "Area = " << cyl.area() << "\nVolume = " << cyl.volume() << '\n';
   //��Բ�����������ֵ
   cyl.setHeight ( 10 ) ;   cyl.setRadius ( 4.25 ) ;    cyl.setPoint ( 2, 2 ) ;
   cout << "\nThe new location, radius ang height of cyl are\n" << cyl
        << "Area = " << cyl.area() << "\nVolume = "<<cyl.volume()<< "\n" ;
        return 0;
} 




