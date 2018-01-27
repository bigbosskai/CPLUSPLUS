#include<iostream> 
using namespace std;
class Increase{
	public:
		Increase(){
			value=0;
		}
		void display (){
			cout<<value<<endl;
		} 
		Increase& operator++();//前置
		Increase operator++(int);//后置
	private:
		unsigned value; 
}; 
Increase& Increase::operator++(){
	value++;
	return *this;
}
Increase Increase::operator++(int){
	Increase temp;
	temp.value=this->value++;
	return temp;
}
int main(){
	Increase a,b,n;
	a=++n;
	cout<<"a=";
	a.display();
	cout<<"n=";
	n.display();
	cout<<"现在更改a"<<endl; 
	a=b;
	cout<<"a=";
	a.display();
	cout<<"n=";
	n.display();
	return 0;
}
