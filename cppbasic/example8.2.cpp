#include<iostream> 
#include<string.h>
using namespace std;
class Date{
	public:
		Date(int y,int m,int d){
			SetDate(y,m,d);
		}
		void SetDate(int y,int m,int d){
			year=y;month=m;day=d;
		}
		void Print(){
			cout<<year<<"/"<<month<<"/"<<day<<";";
		}
	protected:
		int year,month,day;
};
class DateTime:public Date{
	public:
		DateTime(int y,int m, int d,int h,int mi,int s):Date(y,m,d){
			SetTime(h,mi,s);
		}
		void SetTime(int h,int mi,int s){
			hours=h;minutes=mi;seconds=s;
		}
		void Print(){
			//((Date*)this)->Print(); the same
			Date::Print();
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
	private:
		int hours,minutes,seconds;
};
int main(){
	DateTime dt(2003,1,1,23,30,0);
	dt.Print();
	return 0;
}


