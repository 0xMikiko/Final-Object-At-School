#pragma once
#include"HangHoa.h"

class DienMay:public HangHoa{
private:
	int TGBaoHanh;
	float CongSuat;
	string  ChungLoai;
public:
	DienMay();
	DienMay(string, string, int, float,float, int, int,string);
	void Input();
	void Output();
	float get_TGton();
	string ID();
};
DienMay::DienMay():HangHoa()
{
	TGBaoHanh = 0;
	CongSuat = 1;
	ChungLoai = "";
} 
DienMay::DienMay(string ma, string ten,int slt, float dg,float tgt, int bh, int cs, string cl):HangHoa(ma,ten,slt,dg,tgt)
{
	TGton = SLton * DonGia* (1+0.1);
	TGBaoHanh = bh;
	CongSuat = cs;
	ChungLoai = cl;
}
void DienMay::Input()
{
	cout<<"\n  Nhap thong tin hang dien may\n";
	HangHoa::Input();
	cout<<"  Nhap thoi gian bao hanh: "; cin>>TGBaoHanh;
	cout<<"  Nhap cong suat: "; cin>>CongSuat;
	cin.ignore(32767, '\n');
	cout<<"  Nhap chung loai: "; getline(cin, ChungLoai);
}
void DienMay::Output()
{
	cout<< endl <<" --Hang Dien may--";
	HangHoa::Output();
	cout<<"\t-Tri gia ton: "<<get_TGton() << endl 
		<<"\t-TGBH: "<<TGBaoHanh << endl 
		<<"\t-Cong suat: "<<CongSuat<< endl 
		<<"\t-Chung loai: "<<ChungLoai << endl;
}
string DienMay::ID()
{
	return "DienMay";
}
float DienMay::get_TGton()
{
	TGton = SLton * DonGia* (1+0.1);
	return TGton;
}
