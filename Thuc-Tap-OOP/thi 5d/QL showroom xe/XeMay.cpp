#pragma once
#include "PhuongTienGiaoThong.cpp"
class XeMay:public PhuongTienGiaoThong{
	friend istream& operator >>(istream&,XeMay&);
	friend ostream& operator <<(ostream&,XeMay);
	private:
		int CongSuat;
		PhuongTienGiaoThong rip;
	public:
		void Nhap();
		void Xuat();
		XeMay(void);
		~XeMay(void);
		XeMay(string,string,int,int,int);
		void setCongSuatDongCo(int);
		int getCongSuatDongCo();

};

//void XeMay::Nhap(){
//	PhuongTienGiaoThong::Nhap();	
//	do{
//		cout << "\nNhap vao cong suat: ";
//		cin >> CongSuat;
//		if(CongSuat<0){
//			cout << "\nNhap khong hop le. Nhap lai";
//		}	
//	}while(CongSuat<0);
//}
//
//void XeMay::Xuat(){
//	cout<<"-----------------------"<<endl;
//    cout<<"Hang san xuat: "<<Hangsx<<endl;
//    cout<<"Mau sac: "<<MauXe<<endl;
//    cout<<"Nam san xuat: "<<Namsx<<endl;
//    cout<<"Gia ban: "<<GiaBan<<endl;
//	cout <<"\nSo cho ngoi: " << CongSuat;
//    cout<<"-----------------------"<<endl;
//}



void XeMay::setCongSuatDongCo(int cs){
	CongSuat=cs;
}

int XeMay::getCongSuatDongCo(){
	return CongSuat;
}
XeMay::XeMay(string hang,string mau,int nam,int gia,int cs):PhuongTienGiaoThong(hang,mau,nam,gia){
	CongSuat=cs;
}
XeMay::XeMay(void){
	
}
XeMay::~XeMay(void){
	
}
ostream& operator <<(ostream&os,XeMay x){
	os<<x.rip;
	os <<"\nSo cho ngoi: " << x.CongSuat;
    os<<"-----------------------"<<endl;
    return os;
}
istream& operator >>(istream&is,XeMay&o){
	fflush(stdin);
	is>>o.rip;
    cout << "\nNhap vao cong suat: "; is>>o.CongSuat;
	
}
