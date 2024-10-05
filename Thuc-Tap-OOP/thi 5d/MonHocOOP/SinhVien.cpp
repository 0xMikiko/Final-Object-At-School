#pragma once
#include "MonHoc.cpp"
#include <vector>


class SinhVien{
	friend istream& operator >>(istream&,SinhVien&);
	friend ostream& operator <<(ostream&,SinhVien);
	private:
		string MaSo, HoTen;
		vector<MonHoc> listmonhoc;
	
	public:
		void Nhap();
		void Xuat();
		SinhVien(void);
		SinhVien(const SinhVien &);
		SinhVien(string,string,vector<MonHoc>);
		~SinhVien(void);
		float TinhDiemTrungBinh();
		string XepLoai();
		
		void setmaso(string);
		string getmaso();
		void sethoten(string);
		string gethoten();
		
		void setListMon(MonHoc);
		vector<MonHoc> getListMon();
};
void SinhVien::Nhap(){
//	fflush(stdin);
//	cout << "\nNhap vao ma so: ";
//	getline(cin,MaSo);
//	
	fflush(stdin);
	cout << "\nNhap ten ";
	getline(cin,HoTen);
	
	int luachon;
	do{
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin mon hoc";
		cout <<"\n2.Thoat";
		cout <<"\n-------------------";
		
		do{
			cout << "\nNhap vao lua chon: ";
			cin >>luachon;
			if(luachon!=1&&luachon!=2){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon!=1&&luachon!=2);
		if(luachon==1){
			MonHoc mh;
			mh.Nhap();
			listmonhoc.push_back(mh);
		}
	}while(luachon!=2);
}

istream& operator >>(istream&is,SinhVien&x){
//	fflush(stdin);
//	cout << "\nNhap vao ma so: ";
//	getline(is,x.MaSo);
	
	fflush(stdin);
	cout << "\nNhap ten ";
	getline(is,x.HoTen);
	
	int luachon;
	do{
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin mon hoc";
		cout <<"\n2.Thoat";
		cout <<"\n-------------------";
		
		do{
			cout << "\nNhap vao lua chon: ";
			is >>luachon;
			if(luachon!=1&&luachon!=2){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon!=1&&luachon!=2);
		if(luachon==1){
			MonHoc mh;
			mh.Nhap();
			x.listmonhoc.push_back(mh);
		}
	}while(luachon!=2);
	return is;
}

void SinhVien::Xuat(){
	cout <<"\nMa So: " << MaSo;
	cout <<"\nHo Ten: "<<HoTen;
	int size=listmonhoc.size();
	for(int i =0;i<size;i++){
		cout <<"\nMon hoc thu " <<i+1<<"\n";
		listmonhoc[i].Xuat();
	}
}

ostream& operator <<(ostream&os,SinhVien x){
	os <<"\nMa So: " << x.MaSo;
	os <<"\nHo Ten: "<<x.HoTen;
	int size=x.listmonhoc.size();
	for(int i =0;i<size;i++){
		os <<"\nMon hoc thu " <<i+1<<"\n";
		x.listmonhoc[i].Xuat();
	}
//	cout <<"\Diem trung binh = "<< TinhDiemTrungBinh();
}
SinhVien::SinhVien(void){
	MaSo="NULL";
	HoTen="Minh";
	
}
SinhVien::SinhVien(string hoten,string maso,vector<MonHoc>list){
	HoTen=hoten;
	MaSo=maso;
	int size=list.size();
	for(int i=0;i<size;i++){
		listmonhoc.push_back(list[i]);
	}
}
SinhVien::SinhVien(const SinhVien &x){
	HoTen=x.HoTen;
	MaSo=x.MaSo;
	int size=x.listmonhoc.size();
	for(int i=0;i<size;i++){
		listmonhoc.push_back(x.listmonhoc[i]);
	}
}
float SinhVien::TinhDiemTrungBinh(){
	int tongtinchi=0;
	float tongdiem=0;
	int size=listmonhoc.size();
	for(int i=0;i<size;i++){
		tongtinchi+=listmonhoc[i].getSoChi();
		tongdiem+=listmonhoc[i].getDiem()*listmonhoc[i].getSoChi();
	}
	return tongdiem/tongtinchi;
}
string SinhVien::XepLoai(){
	float dtb=TinhDiemTrungBinh();
	if(dtb<2) return "Kem";
	if(dtb<5) return "Yeu";
	if(dtb<6.5) return "Kha";
	if(dtb<8) return "Gioi";
	if(dtb<9) return "Xuat sac";

}
SinhVien::~SinhVien(void){
	
}

string SinhVien::getmaso(){
	return MaSo;
}
void SinhVien::setmaso(string ms){
	MaSo=ms;
}
void SinhVien::sethoten(string ht){
	HoTen=ht;
}
string SinhVien::gethoten(){
	return HoTen;
}
void SinhVien::setListMon(MonHoc mh){
	listmonhoc.push_back(mh);
}
vector<MonHoc> SinhVien::getListMon(){
	return listmonhoc;
}
