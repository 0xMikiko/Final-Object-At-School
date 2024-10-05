//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin

#include<iostream>
using namespace std;
#include "DateTime.h"


int main(){
	DateAndTime Done(27,8,2022,10,30,20);
	cout << "I finish this task on " << Done.getDay() << "/" << Done.getMonth() << "/" << Done.getYear()
		 << " at " << Done.getHour() << ":" << Done.getMinute() << ":"<< Done.getSecond() << endl;

	cout <<"----------------------------" << endl;

	Done.setDay(29);
	Done.setMonth(2);
	Done.setYear(2020);
	cout << "If today is " << Done.getDay() << "/" << Done.getMonth() << "/" << Done.getYear()<<endl;
	Done.nextDay();
	cout << "Tommorrow is ";
	Done.printStandard();
	
	cout <<"----------------------------" << endl;
	
	Done.setDay(31);
	Done.setMonth(12);
	Done.setYear(2022);
	Done.setSecond(59);
    Done.setMinute(59);
    Done.setHour(23);
	cout << "If today is " << Done.getDay() << "/" << Done.getMonth() << "/" << Done.getYear();
	Done.printTime();
	
	Done.tick();
	Done.nextDay();
	cout << "Tommorrow is " << Done.getDay() << "/" << Done.getMonth() << "/" << Done.getYear(); ;
	Done.printTime();
}
