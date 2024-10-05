#pragma once
#include"HangHoa.h"
class MayMac:public HangHoa{
private:
	string NhaSX;
	string NgayNhap;
public:
	MayMac();
	MayMac(string, string, int, float,float, string, string);
	void Input();
	void Output();
	float get_TGton();
	string ID();
};
MayMac::MayMac():HangHoa()
{
	NhaSX = "";
	NgayNhap = "";
} 
MayMac::MayMac(string ma, string ten,int slt, float dg,float tgt, string nsx, string nnk):HangHoa(ma,ten,slt,dg,tgt)
{
	TGton= SLton * DonGia * (1+0.1);
	NhaSX = nsx;
	NgayNhap = nnk;
}
void MayMac::Input()
{
	cout<<"\n  Nhap thong tin hang may mac\n";
	HangHoa::Input();
	cin.ignore(32767, '\n');
	cout<<"  Nhap nha san xuat: "; getline(cin, NhaSX);
	cout<<"  Nhap ngay nhap kho: "; getline(cin, NgayNhap);
}
void MayMac::Output()
{
	cout<< endl <<" --Hang May mac--";
	HangHoa::Output();
	cout<<"\t-Tri gia ton: "<<get_TGton()<< endl 
		<<"\t-Nha san xuat: "<<NhaSX<< endl 
		<<"\t-Ngay nhap kho: "<<NgayNhap << endl;
}
string MayMac::ID()
{
	return "MayMac";
}
float MayMac::get_TGton()
{
	TGton= SLton * DonGia * (1+0.1);
	return TGton;
}
