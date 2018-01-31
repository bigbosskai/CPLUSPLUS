#include<iostream>
using namespace std;

class figure{
	protected:
		double x,y;
	public:
		void set_dim(double x,double y){
			this->x=x;
			this->y=y;
		}
		virtual void show_area()=0;
};
class triangle:public figure{
	public:
		void show_area(){
			cout<<"Triangle with high "<<x<<" and base "<<y<<endl;
			cout<<"The area is "<<0.5*x*y<<endl;
		}
};
class square:public figure{
	public:
		void show_area(){
			cout<<"Square with high "<<x<<" and base "<<y<<endl;
			cout<<"The area is "<<x*y<<endl;
		}
};
class circle:public figure{
	public:
		void show_area(){
			cout<<"Square with radius "<<x<<endl;
			cout<<"The area is "<<x*3.14*x<<endl;
		}
};

void show_table(figure &f){
	f.show_area();
}

class Number{
	public:
		Number(int i){
			val=i;
		}
		virtual void Show()=0;
	protected:
		int val;
};
class Hex_type:public Number{
	public:
		Hex_type(int i):Number(i){
		}
		void Show(){
			cout<<"Hexadeciaml:"<<hex<<val<<endl;
		}
};
class Dec_type : public Number
{ public:    Dec_type(int i) : Number(i) { }
             void Show()  { cout << "Decimal: " << dec << val << endl ; }
};

class Oct_type : public Number
{ public:    Oct_type(int i) : Number(i) { }
             void Show()  { cout << "Octal: " << oct << val << endl ; }
};
void fun(Number &n){
	n.Show();
}



int main()
{
	triangle 	t1;
	square 		s1;
	circle 		c1;
	t1.set_dim(1.0,1.0);
	s1.set_dim(1.0,1.0);
	c1.set_dim(1.0,1.0);
	show_table(t1);
	show_table(s1);
	show_table(c1);
	Hex_type 	h1(50);
	Dec_type 	d1(50);
	Oct_type 	o1(50);
	
	fun(h1);
	fun(d1);
	fun(o1);
	
	
	
	return 0;
}
