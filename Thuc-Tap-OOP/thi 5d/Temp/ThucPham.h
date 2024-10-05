#pragma once
#include"HangHoa.h"
class ThucPham:public HangHoa{
private:
	string NSX;
	string HSD;
	string NhaCungCap;
public:
	ThucPham();
	ThucPham(string, string,int, float,float, string, string, string);
	void Input();
	void Output();
	float get_TGton();
	string ID();
};
ThucPham::ThucPham():HangHoa()
{
	NSX = "";
	HSD = "";
	NhaCungCap = "";
} 
ThucPham::ThucPham(string ma, string ten,int slt, float dg,float tgt,string nsx, string hsd, string ncc):HangHoa(ma,ten,slt,dg,tgt)
{
	TGton = SLton * DonGia * (1+0.05);
	NSX = nsx;
	HSD = hsd;
	NhaCungCap = ncc;
}
void ThucPham::Input()
{
	cout<<"\n  Nhap thong tin thuc pham\n";
	HangHoa::Input();
	cin.ignore(32767, '\n');
	cout<<"  Nhap ngay san xuat: "; getline(cin, NSX);
	cout<<"  Nhap han su dung: "; getline(cin, HSD);
	cout<<"  Nhap nha cung cap: "; getline(cin,  NhaCungCap);
}
void ThucPham::Output()
{
	cout<< endl <<" --Hang Thuc pham--";
	HangHoa::Output();
	cout<<"\t-Tri gia ton: "<<get_TGton() << endl 
		<<"\t-Ngay san xuat: "<<NSX << endl 
		<<"\t-Han su dung: "<<HSD << endl 
		<<"\t-Nha cung cap: "<< NhaCungCap << endl ;
}
string ThucPham::ID()
{
	return "ThucPham";
}
float ThucPham::get_TGton()
{
	TGton = SLton * DonGia * (1+0.05);
	return TGton;
}
