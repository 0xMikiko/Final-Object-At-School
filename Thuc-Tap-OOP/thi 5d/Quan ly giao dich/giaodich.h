#ifndef __giaodich__H__
#define __giaodich__H__

#include<iostream>
#include<string>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
};

class GD{
    protected:
        string maGD;
        Date ngayGD;
        long long dongia;
    public:
        GD();
        GD(string, Date, long long);
        void setMa(string);
        void setDate(Date);
        void setGia(long long);
        string getMa();
        Date getDate();
        long long getGia();
};

GD::GD(){
    maGD="X";
    ngayGD.day=1;
    ngayGD.month=1;
    ngayGD.year=200;
    dongia=0;
}
GD::GD(string m, Date d, long long g){
    maGD=m;
    ngayGD=d;
    dongia=g;
}
void GD::setMa(string m){maGD=m;}
void GD::setDate(Date d){ngayGD=d;}
void GD::setGia(long long g){dongia=g;}
string GD::getMa(){return maGD;}
Date GD::getDate(){return ngayGD;}
long long GD::getGia(){return dongia;}

#endif