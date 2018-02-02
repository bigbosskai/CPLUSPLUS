#include<iostream> 
using namespace std;
template<typename T>
class Array{
	public:
		Array(int s);
		virtual ~Array();
		virtual const T& Entry(int index);
		virtual void Enter(int index,const T& value);
	protected:
		int size;
		T *element;
};

template<typename T>Array<T>::Array(int s){
	if(s>1)size=s;
	else size=1;
	element = new T[size];
}
template<typename T>Array<T>::~Array(){
	delete [] element;
}
template<typename T>const T& Array<T>::Entry(int index){
	return element[index];
}
template<typename T>void Array<T>::Enter(int index,const T& value){
	element[index]=value;
}

int main(){
	Array<int> IntAry(5);
	int i;
	for(i=0; i<5; i++){
		IntAry.Enter(i,i);
	}
	for(i=0; i<5; i++){
		cout<<IntAry.Entry(i)<<"\t";	
	} 
	Array<double> DouAry(5);
	for(i=0; i<5; i++){
		DouAry.Enter(i,(i+1)*0.35);
	} 
	for(i=0; i<5; i++){
		cout<<DouAry.Entry(i)<<"\t";	
	} 
	
	return 0;
}
