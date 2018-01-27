#include<iostream>
#include<stdlib.h>
using namespace std;
class Calculator{
	public:
		Calculator(){
			value=0;
		}
		void operator++();
		void operator--();
		unsigned int operator()();
	private:
		unsigned int value;
};
void Calculator::operator++(){
	if(value<65535){
		value++;
	}
	else{
		cout<<"Data overflow!"<<endl;
		abort();
	}
}
void Calculator::operator--(){
	if(value>0)value--;
	else{
		cout<<"\nData overflow!"<<endl;
		abort();
	}
}
unsigned int Calculator::operator()(){
	return value;
}
int main2018126163627(){
	Calculator Counter;
	int i;
	for(i=0;i<5;i++){
		++Counter;
		cout<<"\nCounter="<<Counter()<<endl;
	}
	for(i=0;i<5;i++){
		--Counter;
		cout<<"\nCounter="<<Counter()<<endl;
	}
	return 0;
}
class TriCoor{
	private:
		int x,y,z;
	public:
		TriCoor(int mx=0,int my=0,int mz=0){
			x=mx;
			y=my;
			z=mz;
		}
		TriCoor operator+(TriCoor t){
			TriCoor temp;
			temp.x=this->x+t.x;
			temp.y=this->y+t.y;
			temp.z=this->z+t.z;
			return temp;
		}
		TriCoor operator=(TriCoor t){
			this->x=t.x;
			this->y=t.y;
			this->z=t.z;
			return *this;
		}
		TriCoor operator++(){
			this->x++;
			this->y++;
			this->z++;
			return *this;
		}
		void show(){
			cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		void assign(int mx,int my,int mz){
			this->x=mx;
			this->y=my;
			this->z=mz;
		}
}; 
int main2018126170300(){
	TriCoor a(1,2,3),b,c;
	++b;
	++c;
	c=a+b+c;
	c.show();
	return 0;
}
class Complex{
	public:
		double Real;
		double Image;
	public:
		Complex(){
			Real=0;Image=0;
		}
		Complex(double a){
			Real=a;
			Image=0;
		}
		Complex(double a,double b){
			Real=a;
			Image=b;
		}
		//friend Complex operator+(const Complex &c1,const Complex &c2);
		//Complex operator+(Complex);
}; 
/*
Complex Complex::operator+(const Complex &c1,const Complex &c2){
	double r=c1.Real+c2.Real;
	double i=c1.Image+c2.Image;
	Complex temp(r,i);
	return temp; 
}
*/
/*
Complex Complex::operator+(Complex t){
	Complex temp;
	temp.Real=this->Real+t.Real;
	temp.Image=this->Image+t.Image;
	return temp;
}
*/
int main2018127133725(){
	Complex z(2,3),k(3,4);
	//z=z+27;
	//z=27+z; //error
	cout<<z.Real<<" "<<z.Image<<endl;
	return 0;
}
/* 
class Increase{
	public:
		Increase(){
			value=0;
		}
		void display (){
			cout<<value<<endl;
		} 
		Increase operator++();//前置
		Increase operator++(int);//后置
	private:
		unsigned value; 
}; 
Increase Increase::operator++(){
	value++;
	return *this;
}
Increase Increase::operator++(int){
	Increase temp;
	temp.value=this->value++;
	return temp;
}
int main2018127134714(){
	Increase a,b,n;
	a=n++;//a的值是0 
	cout<<"a=";
	a.display();
	return 0;
}

*/

class Increase {
	public:
		Increase(){
			value=0;
		}
		void display (){
			cout<<value<<endl;
		}
		friend Increase operator++(Increase &);
		friend Increase operator++(Increase &,int);
	private:
		unsigned value;
};


Increase operator++(Increase  &a){
	a.value++;
	return a;
}

Increase operator++(Increase &a,int){
	Increase temp(a);
	a.value++;
	return temp;
}





int main2018127140137(){
	Increase a,b,n;
	//cout<<"aaa"<<endl;
	a=n++;
	cout<<"a=";
	a.display();
	cout<<"n=";
	n.display();
	return 0;
}
class F{
	public:
		double operator()(double x,double y){
			return x*x+y*y;
		}
}; 
int main2018127140500(){
	F f;
	cout<<f(5.2,5.3)<<endl;
	return 0;
}
class vector{
	public:
		vector(int size=1);
		int &operator[](int i);
		friend ostream& operator<<(ostream & output,vector &);
		friend istream& operator>>(istream & input,vector &);
	private:
		int *v;
		int len;
}; 
vector::vector(int size=1){
	if(size<=0 || size>100){
		cout<<"The size of"<<size<<"is null!"<<endl;
	}
	this->v = new int[ size ];
	this->len=size;
}
vector::~vector(){
	delete [] v;
	len=0;
}
ostream & operator<<(ostream &output,vector &v){
	for(int i=0;i<v.len;i++){
		output<<v[i]<<" ";
	}
	output<<endl;
	return output;
}
istream & operator>>(istream &input,vector &v){
	for(int i=0;i<v.len;i++){
		input>>v[i];
	}
	return input;
}
int & vector::operator[](int i){
	return this->v[i];
}
int main(){
	
	
	return 0;
}

