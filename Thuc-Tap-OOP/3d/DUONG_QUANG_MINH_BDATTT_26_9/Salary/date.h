#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
class Date{
    private:
        int day;              
        int month;              
        int year;               
        int checkDay() ;
    public:
        Date(int=1,int=1,int=1900);
        int getMonth();        
        int getDay();          
        int getYear();          
        void print();           
};
int Date::checkDay(){
    if(month > 12 ||month  < 1 ) return 1;
    switch(month){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            if(day<1||day>31) return 1;
            break;
        case 4:case 6:case 9:case 11:
            if(day<1||day>30) return 1;
        case 2:
            if(year%4==0){
                if(day<1||day>29)   return 1;
            }else{
                if(day<1||day>28)   return 1;
            }
    }
}
Date::Date(int D, int M, int Y){
	day = D;
	month = M;
	year = Y;
	checkDay();
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}
void Date::print(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
#endif

