#include<iostream>
#include<fstream>
using namespace std;
int main ()
{ fstream f( "d:DATA.dat" , ios::in | ios::out | ios::binary ) ;	
   int i, j ;
   for( i = 0; i < 20 ; i ++ )  f.write((char *)&i, sizeof(int) ) ;   
   long pos = f.tellp() ;		
   for( i = 20; i<40 ; i ++ ) f.write( (char*)&i, sizeof(int) ) ;    
   f.seekg(pos) ;			
   f.read((char*)&i, sizeof(int) ) ;	
   cout << "The data stored is " << i << endl ;
   f.seekp( 0, ios::beg ) ;		
   for( i = 0; i<40 ; i ++ )		
     { f.read( (char*)&j, sizeof(int) ) ;   cout<<j<<ends; }
   cout<<endl;
   return 0;
}

