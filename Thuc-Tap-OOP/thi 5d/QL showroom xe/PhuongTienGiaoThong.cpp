#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

class PhuongTienGiaoThong{
	friend ostream& operator<<(ostream& , const PhuongTienGiaoThong&);
    friend istream& operator>>(istream& , PhuongTienGiaoThong&);
	protected:
		string Hangsx;
		int Namsx;
		int GiaBan;
		string MauXe;
	public:
		void Nhap();
		void Xuat();
		PhuongTienGiaoThong(void);
		PhuongTienGiaoThong(string,string,int,int);
		~PhuongTienGiaoThong(void);
		void setHangsx(string);
		string getHangsx();
		void setNamsx(int);
		int getNamsv();
		void setGiaBan(int);
		int getGiaBan();
		void setMauXe(string);
		string getMauXe();
};
ostream& operator<<(ostream& out, const PhuongTienGiaoThong&A){
	out << "\nHang san xuat: "<< A.Hangsx;
	out << "\nNam san xuat: "<< A.Namsx;
	out << "\nGia ban: "<< A.GiaBan;
	out << "\nMau xe: "<< A.MauXe;
}
istream& operator>>(istream& is, PhuongTienGiaoThong&A){
	fflush(stdin);
	cout << "\nNhap vao hang san xuat: ";getline(is,A.Hangsx);
	bool Check;
	do{
		cout << "\nNhap vao nam san xuat: ";
		is >> A.Namsx;
		if(A.Namsx<1){
			cout << "\nNam san xuat khong hop le. Nhap lai";
			Check=false;
		}
	}while(!Check);
	
	do{
		cout << "\nNhap vao gia ban: ";
		is >> A.GiaBan;
		if(A.GiaBan<0){
			cout << "\nGia ban khong hop le. Nhap lai";
		}	
	}while(A.GiaBan<0);
	
	fflush(stdin);
	cout << "\nNhap vao mau xe: ";
	getline(is,A.MauXe);
}
//void PhuongTienGiaoThong::Nhap(){
//	fflush(stdin);
//	cout << "\nNhap vao hang san xuat: ";
//	getline(cin,Hangsx);
//	
//	bool Check;
//	do{
//		cout << "\nNhap vao nam san xuat: ";
//		cin >> Namsx;
//		if(Namsx<1){
//			cout << "\nNam san xuat khong hop le. Nhap lai";
//			Check=false;
//		}
//	}while(!Check);
//	
//	do{
//		cout << "\nNhap vao gia ban: ";
//		cin >> GiaBan;
//		if(GiaBan<0){
//			cout << "\nGia ban khong hop le. Nhap lai";
//		}	
//	}while(GiaBan<0);
//	
//	fflush(stdin);
//	cout << "\nNhap vao mau xe: ";
//	getline(cin,MauXe);
//}
//void PhuongTienGiaoThong::Xuat(){
//	cout << "\nHang san xuat: "<< Hangsx;
//	cout << "\nNam san xuat: "<< Namsx;
//	cout << "\nGia ban: "<< GiaBan;
//	cout << "\nMau xe: "<< MauXe;
//}


string PhuongTienGiaoThong::getHangsx(){	return Hangsx;}
int PhuongTienGiaoThong::getNamsv(){	return Namsx;}
int PhuongTienGiaoThong::getGiaBan(){return GiaBan;}
string PhuongTienGiaoThong::getMauXe(){return MauXe;}

void PhuongTienGiaoThong::setHangsx(string hangsx){
	Hangsx=hangsx;
}
void PhuongTienGiaoThong::setNamsx(int namsx){
	Namsx=namsx;
}
void PhuongTienGiaoThong::setGiaBan(int gia){
	GiaBan=gia;
}
void PhuongTienGiaoThong::setMauXe(string mau){
	MauXe=mau;
}

PhuongTienGiaoThong::PhuongTienGiaoThong(string hang,string mau,int nam,int gia){
	Hangsx=hang;
	Namsx=nam;
	GiaBan=gia;
	MauXe=mau;
}
PhuongTienGiaoThong::PhuongTienGiaoThong(void){
	
}
PhuongTienGiaoThong::~PhuongTienGiaoThong(void){
	
}
