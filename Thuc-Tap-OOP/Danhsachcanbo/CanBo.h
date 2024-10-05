#ifndef CanBo_H
#define CanBo_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class CanBo{
	protected:
		string MaSo, HoTen;
		int PhuCap;
		float HeSoLuong;
	public:
		CanBo();
		virtual void Nhap();
		virtual void Xuat(ostream& os);
		virtual int TinhLuong();
};


void CanBo::Nhap(){
	fflush(stdin);
	cout << "Nhap ma so:\n";
	getline(cin,this->MaSo);
	fflush(stdin);
	cout << "Nhap ho ten:\n";
	getline(cin,this->HoTen);
	cout <<"Nhap he so luong:\n";
	cin >> this->HeSoLuong;
}
void CanBo::Xuat(ostream& os){
	os << "Ma so: " << this->MaSo<<endl;
	os << "Ho ten: " << this->HoTen<<endl;
	os << "Phu cap: " << this->PhuCap<<endl;
	os << "He so luong: " << this->HeSoLuong<<endl;
}
CanBo::CanBo(){
	this->HeSoLuong=0;
	this->PhuCap=0;
	this->MaSo="0000";
	this->HoTen="NULL";
}
CanBo::TinhLuong(){
	
}

#endif
