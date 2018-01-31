#ifndef EMPLOYEE_H
#define EMPLOTEE_H
class Employee
{ 
public:
       Employee(const long,const char* );
       virtual ~Employee();			
       const char * getName() ;
       const long getNumber() ;
       virtual double earnings()=0;	
       virtual void print() ;
protected:
       long		number;		// ���
       char *	name;		// ����
};


#endif 