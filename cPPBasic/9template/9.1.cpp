#include <iostream>
using namespace std;
template < typename  T >
T  max1 ( T  a , T  b )
{ return  a > b ? a : b ; }
int main ( )
{ cout << " max1 ( 3 , 5 )  is  " << max1 ( 3 , 5 ) << endl ;
  cout << " max1 ( 'y' , 'e' )  is  " << max1 ( 'y' , 'e' ) << endl ;
  cout << " max1 ( 9.3 , 0.5 )  is  " << max1 ( 9.3 , 0.5 ) << endl ;
  return 0;
}

