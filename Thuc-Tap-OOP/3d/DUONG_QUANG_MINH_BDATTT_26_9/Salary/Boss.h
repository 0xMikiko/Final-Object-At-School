#ifndef BOSS_H
#define BOSS_H
#include "Employee.h"

class Boss: public Employee{
    private:
        double weeklySalary;
	public:
        Boss(char*, char*, int, int, int, double = 0.0, int =0);
        void setWeeklySalary(double);
        virtual double earnings();
        virtual void print();

};

Boss::Boss( char *FN, char *LN, int D, int M, int Y, double WeekSar, int Code):Employee(FN,LN,D, M,Y,Code){
    weeklySalary = WeekSar;
}
void Boss::setWeeklySalary(double WeekSar){
    weeklySalary = WeekSar;
}
double Boss::earnings(){
    return weeklySalary;
}
void Boss::print(){
	Employee::print();
    cout<<" Boss's salary: $"<<Boss::earnings()<<endl;
    cout << endl;
}

#endif
