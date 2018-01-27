#include<iostream>
using namespace std;
class parent_class{
	int data1;
	int data2;
	public:
		parent_class(int p1,int p2):data1(p1),data2(p2){

		}
		int inc1(){return ++this->data1;}
		int inc2(){
			return ++this->data2;
		}
		void display(){
			cout<<"data1="<<data1<<"data2="<<data2<<endl;
		}
};
class child_class:private parent_class{
	public:
		int data3;
		parent_class data4;
		child_class(int p1,int p2,int p3,int p4,int p5):parent_class(p1,p2),data4(p4,p5){
			data3=p3;
		}
		int inc1(){
			return parent_class::inc1();
		}
		int inc3(){
			return ++data3;
		}
		void display(){
			parent_class::display();//2 2
			data4.display();//4 5
			cout<<"data3="<<data3<<endl;//3
		}
		
};
int main()
{
	child_class d1(1,2,3,4,5);
	d1.inc1();
	d1.display();
	return 0;
}
