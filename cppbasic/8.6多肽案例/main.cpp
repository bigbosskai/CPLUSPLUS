#include<iostream>
#include"employee.h"
using namespace std;
class Manager:public Employee{
public:
	Manager(const long number,const char *name,double s=0.0):Employee(number,name){
		this->montylysalary=s;
	}
	void setWorks(int numworks)
	{
		this->numworks=numworks;
		name=new char*[numworks];
		for(int i=0;i<numworks; i++)
		{
			name[i]=new char[2];
			name[i][0]='A'+i;
			name[i][1]='\0';
		}
	}
	void setSalary(double s){
		this->montylysalary=s;
	}
	double earnings(){
		return this->montylysalary;
	}
	void print(){
		cout<<"Manager:"<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"number: "<<number<<endl;
		cout<<"montylysalary: "<<montylysalary<<endl;
	}
	~Manager()
	{
		cout<<"Manager:: ~Manager() is called.\n";
		for(int i=0;i<numworks; i++)
		{
			delete [] name[i];
		}
		delete [] name;
	}
private:
	double	montylysalary;
	int		numworks;
	char	**name;
};

class HourlyWorker:public Employee{
public:
	HourlyWorker(const long number,char *name,double s=0.0):Employee(number,name){
		wage=s;
	}
	void setWage(double wa)
	{
		wage=wa;
	}
	void setHours(int hours)
	{
		this->hours=hours;
	}
	double earnings()
	{
		return this->wage*this->hours*30;
	}
	void print(){
		cout<<"HourlyWorker:"<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"number: "<<number<<endl;
		cout<<"wage: "<<wage<<endl;
		cout<<"hours: "<<hours<<endl;
	}
private:
	double wage;
	int hours;
};

class PieceWorker : public Employee
{ 
public:
	PieceWorker(const long number, const char * name, double w=0.0, int quan=0 ):Employee(number,name){
		
	}
    void setWage ( double wage){
		this->wagePerPiece=wage;
	}
	void setQuantity ( int quan) {
		this->quantity=quan;
	}
    double earnings(){
		return wagePerPiece*quantity;
	}
    void print(){
		cout<<"PieceWorker:"<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"number: "<<number<<endl;
		cout<<"wagePerPiece: "<<wagePerPiece<<endl;
		cout<<"quantity: "<<quantity<<endl;
	}
  private:
       double wagePerPiece;	
       int quantity;			
};
void print_message(Employee *emp)
{
	emp->print();
	cout<<emp->earnings()<<endl;
	delete emp;	//这样的情况下delete emp;会使Manager *emp1 的析构函数自动执行
}

int main(){
	Manager			*pm1=new Manager(1001,"WangKai");
	HourlyWorker	*ph1=new HourlyWorker(1002,"TuTu");
	PieceWorker		*pp1=new PieceWorker(1003,"LiuZhi");

	pm1->setSalary(3000.0);
	pm1->setWorks(10);
	
	ph1->setHours(10);
	ph1->setWage(15.0);
	
	pp1->setWage(100);
	pp1->setQuantity(100);


	print_message(pm1);
	print_message(ph1);
	print_message(pp1);


	return 0;
}