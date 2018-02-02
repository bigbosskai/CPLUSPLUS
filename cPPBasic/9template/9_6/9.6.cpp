#include<iostream>
using namespace std;
const double pi=3.1415926;
template<typename T>
class Circle{
	T radius;
	static int total;
public:
	Circle(){
		radius = 0;
		total++;
	}
	Circle(T r){
		radius = r;
		total++;
	}
	void Set_Radius(T r){
		radius = r;
	}
	double Get_Radius(){
		return radius;
	}
	double Get_Girth()
	{
		return 2*pi*radius;
	}
	double Get_Area(){
		return pi*radius*radius;
	}
	static int ShowTotal();
};
template<typename T>
int Circle<T>::total=0;
template<typename T>
int Circle<T>::ShowTotal(){
	return total;
}


int main(){
	cout<<Circle<double>::ShowTotal()<<endl;
	Circle<int> A,B;
	Circle<double> C;
	cout<<Circle<int>::ShowTotal()<<endl;
	cout<<Circle<double>::ShowTotal()<<endl;
	return 0;
}