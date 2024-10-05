#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

bool KiemTraLaSoNguyen(string s){
	int length = s.length();
	int dem=0;
	for(int i =0;i<length;i++){
		if((s[i]<'0'|| s[i]> '9') && s[i]!='-' )	return false;
		if(s[i]!='-' && s[i+1]=='-')	return false;
		if(s[i]=='-'){
			dem++;
			if(dem==2) return false;
		}
		return true;
	}
}

class MonHoc{
	private:
		string Ten;
		int SoChi;
		float Diem;
	public:
		void Nhap();
		void Xuat();
		MonHoc(void);
		~MonHoc(void);
		void setSoChi(int);
		int getSoChi();
		void setDiem(float);
		float getDiem();
		void setTenMon(string);
		string getTenMon();
};

void MonHoc::Nhap(){
	fflush(stdin);
	cout << "\nNhap vao ten mon hoc: ";
	getline(cin,Ten);
	
	bool Check;
	do{
		cout << "\nNhap vao so chi mon hoc: ";
		//cin >> SoChi;
		string sochi;
		fflush(stdin);
		getline(cin,sochi);
		Check=KiemTraLaSoNguyen(sochi);
		if(!Check){
			cout << "\nKieu du lieu ko hop le";
		}else{
			SoChi=atoi(sochi.c_str());
			if(SoChi<1){
				cout << "\nSo chi khong hop le. Nhap lai";
				Check=false;
			}
		}
	
	}while(!Check);
	
	do{
		cout << "\nNhap vao diem mon hoc: ";
		cin >> Diem;
		if(Diem<0 || Diem>10){
			cout << "\nDiem khong hop le. Nhap lai";
		}	
	}while(Diem<0 || Diem>10);
}
void MonHoc::Xuat(){
	cout << "\nTen mon hoc: "<< Ten<<endl;
	cout << "So chi: "<< SoChi;
	cout << "\nDiem: "<< Diem;
}
MonHoc::MonHoc(){
	
}
MonHoc::~MonHoc(){
	
}
void MonHoc::setSoChi(int sochi){
	SoChi=sochi;
}
void MonHoc::setDiem(float diem){
	Diem=diem;
}
int MonHoc::getSoChi(){
	return SoChi;
}
float MonHoc::getDiem(){
	return Diem;
}
void MonHoc::setTenMon(string ten){
	Ten=ten;
}
string MonHoc::getTenMon(){
	return Ten;
}
