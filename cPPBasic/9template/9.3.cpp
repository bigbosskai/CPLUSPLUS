#include<iostream>
using namespace std;
template<typename T>
T Max1(const T a,const T b){
	return a>b?a:b;
}

template<typename T>
T Max1(const T a,const T b,const T c){
	T t;
	t=Max1(a,b);
	return Max1(t,c);
} 


int Max1(const int a,const char b){
	return a>b?a:b;
}

int  main ()
 { cout<< " Max1( 3, 'a' ) is " << Max1( 3, 'a' ) << endl ;
    cout << " Max1(9.3, 0.5) is " << Max1(9.3, 0.5) << endl ;
    cout << " Max1(9, 5, 23) is " << Max1(9, 5, 23) << endl ;
    return 0;
 }

