#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;
class Date{
public:
	int day;
    int month;
    int year;
};
class GiaoDich{
	friend ostream& operator<<(ostream& , const GiaoDich&);
    friend istream& operator>>(istream& , GiaoDich& );
	protected:
        string magiaodich;
        Date ngaygiaodich;
        int dongia;
    public:
        GiaoDich();
        ~GiaoDich();
        GiaoDich(string, Date, int);
        void setmagiaodich(string);
        void setngaygiaodich(Date);
        void setdongia(int);
        string getmagiaodich();
        Date getngaygiaodich();
        int getdongia();
};
ostream& operator<<(ostream& out, const GiaoDich& A){
	out << "_____THONG TIN GIAO DICH____" << endl;
    out << "Ma giao dich: " << A.magiaodich << endl;
    out << "Ngay giao dich: " <<  A.ngaygiaodich.day<<"/"<<A.ngaygiaodich.month<<"/"<<A.ngaygiaodich.year  << endl;
    out << "Don gia: " << A.dongia << endl;
}
istream& operator>>(istream& in, GiaoDich& A){
	fflush(stdin);
    cout<<"Nhap ma giao dich: ";getline(in,A.magiaodich);
    cout<<"Nhap ngay giao dich: ";in>>A.ngaygiaodich.day;
    cout<<"Nhap thang giao dich: ";in>>A.ngaygiaodich.month;
    cout<<"Nhap nam giao dich: ";in>>A.ngaygiaodich.year;
    cout<<"Nhap don gia: ";in>>A.dongia;
}
GiaoDich::GiaoDich(){
    magiaodich="NULL";
    ngaygiaodich.day=1;
    ngaygiaodich.month=1;
    ngaygiaodich.year=2000;
    dongia=0;
}
GiaoDich::~GiaoDich(){

}
GiaoDich::GiaoDich(string m, Date d, int g){
    magiaodich=m;
    ngaygiaodich=d;
    dongia=g;
}
void GiaoDich::setmagiaodich(string m){
	magiaodich=m;
}
void GiaoDich::setngaygiaodich(Date d){
	ngaygiaodich=d;
}
void GiaoDich::setdongia(int g){
	dongia=g;
}
string GiaoDich::getmagiaodich(){
	return magiaodich;
}

Date GiaoDich::getngaygiaodich(){
	return ngaygiaodich;
}

int GiaoDich::getdongia(){
	return dongia;
}
