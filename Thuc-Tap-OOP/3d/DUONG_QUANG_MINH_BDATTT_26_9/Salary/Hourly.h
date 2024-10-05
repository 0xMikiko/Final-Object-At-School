#ifndef HOUR_H
#define HOUR_H
#include "Employee.h"

class HourlyWorker: public Employee{
    private:
        double wage;   
        double hours; 
	public:
        HourlyWorker(char*, char*, int, int , int, double = 0.0, double = 0.0, int = 0);
        void setWage(double);
        void setHours(double);
        virtual double earnings();
        virtual void print();
 
};
HourlyWorker::HourlyWorker(char *FN,char *LN, int D, int M, int Y, double Wage, double Hours, int Code)
:Employee(FN,LN,D, M,Y,Code){
    wage = Wage;
    hours = Hours;
}
void HourlyWorker::setWage(double Wage){
    wage = Wage;
}
void HourlyWorker::setHours(double hour){
    hours = hour;
}
double HourlyWorker::earnings(){
    return hours*wage;
}

void HourlyWorker::print(){
	Employee::print();
    cout<<" HourlyWorker's salary: $"<<HourlyWorker::earnings()<<endl;
    cout << endl;

}
#endif


