#ifndef GiangVien_H
#define GiangVien_H
#include "CanBo.h"
class GiangVien:public CanBo{
	private:
		string Khoa, TrinhDo;
		short SoTietDay;
	public:
		void Nhap();
		void Xuat(ostream& os);
		int TinhLuong();
		GiangVien();
};

GiangVien::GiangVien():CanBo(){
	this->Khoa="CNTT";
	this->SoTietDay=0;
	this->TrinhDo="Cu Nhan";
}
void GiangVien::Nhap(){
	CanBo::Nhap();
	fflush(stdin);
	cout<<"Nhap ten khoa:\n";
	getline(cin,this->Khoa);
	int chonTrinhDo;
	do{
		cout<< "Chon trinh do:\n";
		cout << "1. Cu nhan\n";
		cout << "2. Thac si\n";
		cout << "3. Tien si\n";
		cin >> chonTrinhDo;
		switch(chonTrinhDo){
			case 1:	this->TrinhDo="Cu nhan"; this->PhuCap=300; break;
			case 2:	this->TrinhDo="Thac si"; this->PhuCap=500;  break;
			case 3:	this->TrinhDo="Tien si"; this->PhuCap=1000; break;	
			default:" Chon khong dung. Hay chon lai\n"; break;
		}
	}while(chonTrinhDo<1 || chonTrinhDo>3);
	do{
		cout <<"Nhap so tiet day:\n";
		cin >>this->SoTietDay;
		if(this->SoTietDay<=0){
			cout<<"So tiet day phai lon hon 0\n";
		}
	}while(SoTietDay<=0);
}

void GiangVien::Xuat(ostream& os){
	CanBo::Xuat(os);
	os <<"Ten khoa: "<<this->Khoa<<endl;
	os <<"Trinh do: "<<this->TrinhDo<<endl;
	os <<"So tiet day: "<<this->SoTietDay<<endl;
}
int GiangVien::TinhLuong(){
	return HeSoLuong*730 + PhuCap + SoTietDay*45;
}

#endif
