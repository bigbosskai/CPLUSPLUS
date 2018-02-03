#include<iostream>
#include<sstream>
#include<string>
using namespace std;
/*
int main()
{ string testStr ( "Input test 256 * 0.5" ) ;//用string构造串流 
   string s1, s2, s3 ;
   double x, y ;
   istringstream input( testStr ) ;
   input >> s1 >> s2 >> x >> s3 >> y ;
   cout << s1 << ends << s2 << ends << x << s3 << y << "=" << x*y << endl ;
   return 0;
}
*/
int main(){
	char *testStr="Input test 256 * 0.5";//用C风格字符串构造串流 
	string s1,s2,s3;
	double x,y;
	istringstream input( testStr );
	input>>s1>>s2>>x>>s3>>y;
	cout << s1 << ends << s2 << ends << x << s3 << y << "=" << x*y << endl ;
	return 0;
}
