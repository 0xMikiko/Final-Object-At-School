#pragma once
#include "SinhVien.cpp"
#include <fstream>
#include <conio.h>



class LopHoc{
	private:
		vector<SinhVien> DSLOP;
	public:
		void Nhap();
		void Xuat();
		void SapXep();
		int XepHang(string);
		vector<SinhVien> getds();
		void setds(vector<SinhVien> list);
		void ghiFile(ofstream&);
		void docFile(ifstream&);
		LopHoc(void);
		~LopHoc(void);
};
void LopHoc::Nhap(){
	int luachon;
	do{
		cout <<"\n------MENU-------";
		cout<<"\n1.Nhap sinh vien";
		cout <<"\n2.Thoat";
		cout <<"\n-----------------";
	
		do{
			cout << "\nNhap vao lua chon: ";
			cin >>luachon;
			if(luachon!=1&&luachon!=2){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon!=1&&luachon!=2);
		if(luachon==1){
			bool check;
			string mssv;
			do{
				fflush(stdin);
				cout<<"\nNhap mssv: ";
				getline(cin,mssv);
				check= true;
				for(int i=0;i<DSLOP.size();i++){
					if(DSLOP[i].getmaso()==mssv){
						check=false;
						break;
					}
				}
				if(check==false){
					cout <<"\nNhap ma lai. Ma da bi trung";
				}
			}while(check==false);
			SinhVien sv;
			sv.setmaso(mssv);
			sv.Nhap();
			DSLOP.push_back(sv);
		}
	}while(luachon!=2);
}
void LopHoc::Xuat(){
	int size=DSLOP.size();
	for(int i =0;i<size;i++){
		cout <<"\nThong tin sinh vien thu "<<i+1;
		DSLOP[i].Xuat();
	}
}

template <class T>
void HoanVi(T &a,T &b){
	T Temp=a;
	a=b;
	b=Temp;
}
void LopHoc::SapXep(){
	int size = DSLOP.size();
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(DSLOP[i].TinhDiemTrungBinh()<DSLOP[j].TinhDiemTrungBinh()){
				HoanVi<SinhVien>(DSLOP[i],DSLOP[j]);
			}
			else if(DSLOP[i].TinhDiemTrungBinh()==DSLOP[j].TinhDiemTrungBinh()){
				if(DSLOP[i].getmaso()<DSLOP[j].getmaso()){
					HoanVi<SinhVien>(DSLOP[i],DSLOP[j]);	
				}
			}
		}	
	}
}
int LopHoc::XepHang(string mssv){
	SapXep();
	int size = DSLOP.size();
	for(int i=0;i<size-1;i++){
		if(DSLOP[i].getmaso()==mssv){
			return i+1;
		}
	}
	return -1;
}
vector<SinhVien> LopHoc::getds(){
	return DSLOP;
}
void LopHoc::setds(vector<SinhVien> list){
	int size=list.size();
	for(int i=0;i<size;i++){
		DSLOP.push_back(list[i]);
	}
}
void LopHoc::ghiFile(ofstream &fileout){
	SapXep();
	int size = DSLOP.size();
	fileout<<size<<endl;
	for(int i=0;i<size;i++){
		fileout<<DSLOP[i].getmaso()<<" - "<<DSLOP[i].gethoten()<<" - "<<DSLOP[i].TinhDiemTrungBinh()<<" - "<<DSLOP[i].XepLoai()<<" - "<<i+1<<endl;
	}
}
void LopHoc::docFile(ifstream& filein){
	string n;
	getline(filein,n);
	int size=atoi(n.c_str());
	
//	string size;
//	filein >>size;
	for(int i=1;i<=size;i++){
		SinhVien sv;
		
		string maso;
		getline(filein,maso,'-');
		maso.erase(maso.begin()+maso.length()-1);
		filein.ignore(1);
//		filein.seekg(1, std::ios_base::cur);
		sv.setmaso(maso);
		
		string hoten;
		getline(filein,hoten,'-');
		hoten.erase(hoten.begin()+hoten.length()-1);
		filein.ignore(1);
//		filein.seekg(1, std::ios_base::cur);
		sv.sethoten(hoten);
		
//		int m;
//		filein >>m;
		string n;
		getline(filein,n);
		int m=atoi(n.c_str());
		// moi lan doc 1 mon
		for(int j=1;j<=m;j++){
			MonHoc mh;
			string tenmonhoc;
			getline(filein,tenmonhoc,'-');
			tenmonhoc.erase(tenmonhoc.begin()+tenmonhoc.length()-1);
			mh.setTenMon(tenmonhoc);
			filein.ignore(1);
			
			
			int sochi;
			filein >>sochi;
			mh.setSoChi(sochi);
			filein.ignore(3);
//			filein.seekg(3, std::ios_base::cur);
			
//			float diem;
//			filein >>diem;
			string n;
			getline(filein,n);
			float diem=atoi(n.c_str());
			
			mh.setDiem(diem);
			sv.setListMon(mh);
		}
		DSLOP.push_back(sv);	
	}
}
LopHoc::LopHoc(){
	
}
LopHoc::~LopHoc(){
	
}
