#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "date.h"
class Employee{
    private:
        char *firstName;
        char *lastName;
        Date birthday;
        int departmentCode;
    public:
        Employee( char*,  char*, int=1, int=1, int=1990, int=00000);    
        ~Employee();
        char *getFirstName();
        char *getLastName();
        Date getBirthDate();
        int getDepartmentCode();
        virtual double earnings(); 
        virtual void print();      
};
Employee::Employee( char *FN,char *LN, int D, int M, int Y, int Code):birthday( D, M, Y){
    firstName = FN;
    lastName  = LN;
    departmentCode = Code;
}

Employee::~Employee(){
    delete [] firstName;
    delete [] lastName;
}
char* Employee::getFirstName(){
    return firstName;
}

char* Employee::getLastName(){
    return lastName;
}
Date Employee::getBirthDate(){
    return birthday;
}
int Employee::getDepartmentCode(){
    return departmentCode;
}
double Employee::earnings(){
    return 10000;
}
void Employee::print(){
	cout<<" Name: "<<firstName<<" "<<lastName<<endl;
	cout<<" Birthday: ";
	birthday.print();
	cout<<" Department Code: "<<departmentCode<<endl;
}
#endif
