#pragma once
#include "PhuongTienGiaoThong.cpp"
class XeTai:public PhuongTienGiaoThong{
	friend istream& operator >>(istream&,XeTai&);
	friend ostream& operator <<(ostream&,XeTai);
	private:
		int TrongTai;
		PhuongTienGiaoThong rip;
	public:
		void Nhap();
		void Xuat();
		XeTai(void);
		~XeTai(void);
		XeTai(string,string,int,int,int);
		void setTrongTai(int);
		int getTrongTai();

};

//void XeTai::Nhap(){
//	PhuongTienGiaoThong::Nhap();
//	
//	do{
//		cout << "\nNhap vao trong tai: ";
//		cin >> TrongTai;
//		if(TrongTai<0){
//			cout << "\nNhap khong hop le. Nhap lai";
//		}	
//	}while(TrongTai<0);
//}
//void XeTai::Xuat(){
//	cout<<"-----------------------"<<endl;
//    cout<<"Hang san xuat: "<<Hangsx<<endl;
//    cout<<"Mau sac: "<<MauXe<<endl;
//    cout<<"Nam san xuat: "<<Namsx<<endl;
//    cout<<"Gia ban: "<<GiaBan<<endl;
//	cout <<"\nSo cho ngoi: " << TrongTai;
//    cout<<"-----------------------"<<endl;
//}

void XeTai::setTrongTai(int tt){
	TrongTai=tt;
}

int XeTai::getTrongTai(){
	return TrongTai;
}
XeTai::XeTai(string hang,string mau,int nam,int gia,int tt):PhuongTienGiaoThong(hang,mau,nam,gia){
	TrongTai=tt;
}
XeTai::XeTai(void){
	
}
XeTai::~XeTai(void){
	
}
ostream& operator <<(ostream&os,XeTai x){
	os<<x.rip;
	os <<"\nTrong tai: " << x.TrongTai;
	os<<"-----------------------"<<endl;
    return os;
}
istream& operator >>(istream&is,XeTai&o){
	fflush(stdin);
	is>>o.rip;
	cout << "\nNhap vao trong tai: "; is>>o.TrongTai;
	
}
