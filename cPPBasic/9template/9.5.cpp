#include<iostream>
using namespace std;
template<typename T>
class Complex
{ public:
    Complex( T r =0, T i =0 );
    Complex(T a) { Real = a ;  Image = 0 ; } 
    void print() const;
    friend Complex operator+ ( const Complex<T> & c1, const Complex<T> & c2 );
    friend Complex operator- ( const Complex<T> & c1, const Complex<T> & c2 );
    friend Complex operator- ( const Complex<T> & c );
  private:  
    T  Real, Image ;
};



/*
Complex operator+(const Complex<T> &c1,const Complex<T> &c2);
Complex operator-(const Complex<T> &c1,const Complex<T> &c2);
Complex operator-(const Complex<T> &c);
*/
template<typename T> Complex<T>::Complex( T r, T i )
{ Real = r ;   Image = i ; }
template<typename T> 
Complex<T> operator +( const Complex<T> & c1, const Complex<T> & c2 )
{ T r = c1.Real + c2.Real ;     T i = c1.Image+c2.Image ;
   return Complex<T>( r, i ) ;
}
template<typename T> 
Complex<T> operator - ( const Complex<T> & c1, const Complex<T> & c2 )
{ T r = c1.Real - c2.Real ;    T i = c1.Image - c2.Image ;
   return Complex<T>( r, i ) ;
}
template<typename T>
Complex<T> operator- ( const Complex<T> & c )
{ return Complex<T>( -c.Real, -c.Image ); }

template<typename T> void Complex<T>::print()const
{ cout << '(' << Real << " , " << Image << ')' << endl; }

/*

template<typename T>
Complex<T> operator +(const Complex<T> & c1,const Complex<T> & c2){
	Complex<T> ret(c1.Real+c2.Real,c1.Image+c2.Image);
	return ret;
}
template<typename T>
Complex<T> operator -(const Complex<T> & c1,const Complex<T> & c2){
	Complex<T> ret(c1.Real-c2.Real,c1.Image-c2.Image);
	return ret;
}
template<typename T>
Complex<T> operator -(const Complex<T> & c1){
	return Complex<T>(-c1.Real,-c1.Image);
}
template<typename T>
void Complex<T>::print(){
	cout << '(' << Real << " , " << Image << ')' << endl; 
}
*/
int main(){
	Complex<double> c1(2.5,3.7),c2(4.2,6.5);
	Complex<double> c;
	c=c1-c2;
	c.print();
	c=c1+c2;
	c.print();
	
	c=-c1;
	c.print();
	return 0;
}
