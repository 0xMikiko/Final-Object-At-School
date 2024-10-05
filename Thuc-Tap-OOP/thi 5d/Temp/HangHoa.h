#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#define VAT_DienMay = 10/100
#define VAT_MayMac = 10/100
#define VAT_ThucPham = 5/100
using namespace std;


struct Date{
	int d, m, y;
};

class HangHoa{
protected:
	string maHH;
	string tenHH;
	int SLton;
	float DonGia;
	float TGton;
public:	
	HangHoa();
	HangHoa(string, string, int,float, float);
	void virtual Input();
	void virtual Output();
	string  get_maHH() ;
	string virtual ID();
	float virtual get_TGton();
};
HangHoa::HangHoa()
{
	maHH = "";
	tenHH = "";
	SLton = 0;
	DonGia = 1;
	TGton = 0;
}
HangHoa::HangHoa(string ma, string ten, int slt, float dg, float tgt)
{
	maHH = ma;
	tenHH = ten;
	SLton = slt;
	DonGia = dg;
	TGton = tgt;
}

void HangHoa::Input()
{
	cout<<"  Nhap ma: "; getline(cin, maHH);
	cout<<"  Nhap ten: "; getline(cin, tenHH);
	cout<<"  Nhap so luong ton: "; cin>> SLton;
	cout<<"  Nhap don gia: "; cin>>DonGia;
}
void HangHoa::Output()
{
	cout<<"\n\t-Ma: "<<maHH << endl 
		<<"\t-Ten: "<<tenHH<< endl 
		<<"\t-So luong ton: "<<SLton<< endl 
		<<"\t-Don gia: "<<DonGia<< endl ;
}
string HangHoa::get_maHH()
{
	return maHH;
}
string HangHoa::ID()
{
	return "";
}
float HangHoa::get_TGton()
{
	return TGton;
}

