#include<iostream>
#include<string.h>
using namespace std;
class A_class{
	char name[20];
	public:
		void put_name(char *s){
			strcpy(name,s);
		}
		void show_name(){
			cout<<name<<endl;
		}
};
class B_class: public A_class{
	char phone_num[20];
	public:
		void put_phone(char *num){
			strcpy(phone_num,num);
		}
		void show_phone(){
			cout<<phone_num<<endl;
		}
};
int main(){
	A_class  * A_p ;      
	A_class  A_obj ;
   	B_class   B_obj ;  
   	
	A_p = & A_obj ;     
   	A_p -> put_name( "Wang xiao hua" ) ;   
	A_p -> show_name() ;  
   	
	
	A_p = & B_obj ;
   	A_p -> put_name( "Chen ming" ) ;     
	A_p -> show_name() ; 
   	B_obj.put_phone ( "5555_12345678" );
   	( ( B_class * ) A_p ) -> show_phone() ;
   	B_obj.show_name();

	return 0;
}
