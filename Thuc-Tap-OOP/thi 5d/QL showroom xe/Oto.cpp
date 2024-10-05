#pragma once
#include "PhuongTienGiaoThong.cpp"
class Oto:public PhuongTienGiaoThong{
	friend istream& operator >>(istream&,Oto&);
	friend ostream& operator <<(ostream&,Oto);
	private:
		string KieuDongCo;
		int SoChoNgoi;
		PhuongTienGiaoThong rip;
	public:
		void Nhap();
		void Xuat();
		Oto(void);
		~Oto(void);
		Oto(string,string,int,int,string,int);
		void setKieuDongCo(string);
		string getKieuDongCo();
		void setSoChoNgoi(int);
		int getSoChoNgoi();
};

//void Oto::Nhap(){
//	PhuongTienGiaoThong::Nhap();
//	fflush(stdin);
//	cout << "\nNhap vao kieu dong co: ";
//	getline(cin,KieuDongCo);
//	
//	
//	do{
//		cout << "\nNhap vao so cho ngoi: ";
//		cin >> SoChoNgoi;
//		if(SoChoNgoi<0){
//			cout << "\nSo cho ngoi khong hop le. Nhap lai";
//		}	
//	}while(SoChoNgoi<0);
//}
//void Oto::Xuat(){
//	cout<<"-----------------------"<<endl;
//    cout<<"Hang san xuat: "<<Hangsx<<endl;
//    cout<<"Mau sac: "<<MauXe<<endl;
//    cout<<"Nam san xuat: "<<Namsx<<endl;
//    cout<<"Gia ban: "<<GiaBan<<endl;
//    cout<<"Kieu dong co: "<<KieuDongCo<<endl;
//	cout <<"\nSo cho ngoi: " << SoChoNgoi;
//    cout<<"-----------------------"<<endl;
//}
void Oto::setKieuDongCo(string kieudongco){
	KieuDongCo=kieudongco;
}
void Oto::setSoChoNgoi(int seat){
	SoChoNgoi=seat;
}
string Oto::getKieuDongCo(){
	return KieuDongCo;
}

int Oto::getSoChoNgoi(){
	return SoChoNgoi;
}
Oto::Oto(string hang,string mau,int nam,int gia,string keiu,int seat):PhuongTienGiaoThong(hang,mau,nam,gia){
	KieuDongCo=keiu;
	SoChoNgoi=seat;
}
Oto::Oto(){
	
}
Oto::~Oto(){
	
}
ostream& operator <<(ostream&os,Oto o){
	os<<o.rip;
    os<<"Kieu dong co: "<<o.KieuDongCo<<endl;
	os <<"\nSo cho ngoi: " << o.SoChoNgoi;
    os<<"-----------------------"<<endl;
    return os;
}
istream& operator >>(istream&is,Oto&o){
	fflush(stdin);
	is>>o.rip;
	fflush(stdin);
	cout << "\nNhap vao kieu dong co: ";
	getline(is,o.KieuDongCo);
	cout << "\nNhap vao so cho ngoi: "; is>>o.SoChoNgoi;
	
}
