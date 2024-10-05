#ifndef COMMIS_H
#define COMMIS_H
#include "Employee.h"
class CommissionWorker: public Employee{
    private:
        double salary;      
        double commission;   
        unsigned quantity;  
	public:
        CommissionWorker(char*,char*,int, int,int,double = 0.0, double = 0.0, unsigned = 0 , int =0);
        void setSalary(double);
        void setCommision(double);
        void setQuantity(unsigned);
        virtual double earnings() ;
        virtual void print() ;

};
CommissionWorker::CommissionWorker(char *FN,char *LN, int D, int M, int Y, double salary, double commission, unsigned quantity, int Code)
:Employee(FN,LN,D,M,Y,Code){
    this->salary = salary;
    this->commission = commission;
	this->quantity = quantity;
}
void CommissionWorker::setSalary(double salary){
    this->salary = salary;
}
void CommissionWorker::setCommision(double commission){
    this->commission = commission;
}
void CommissionWorker::setQuantity(unsigned quantity){
    this->quantity = quantity;
}
double CommissionWorker::earnings(){
    return salary*quantity;
}
void CommissionWorker::print(){
	Employee::print();
    cout<<" Commission Worker's salary: $"<<CommissionWorker::earnings()<<endl;
    cout << endl;

}

#endif

