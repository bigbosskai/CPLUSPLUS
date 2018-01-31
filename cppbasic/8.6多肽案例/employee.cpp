#include<iostream>
#include<string.h>
#include"employee.h"
using namespace std;


Employee::Employee(const long number,const char* name){
	int len=strlen(name);
	this->name= new char[len+1];
	strcpy(this->name,name);
	this->name[len]='\0';
	this->number=number;
}
Employee::~Employee(){
	cout<<"Employee::~Employee() is called.\n";
	delete [] this->name;
}
const char * Employee::getName(){
	return this->name;
}
const long Employee::getNumber(){
	return this->number;
}
	
void Employee::print() {
	cout<<"Employee father:"<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"number: "<<number<<endl;
}