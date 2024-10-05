#ifndef NhanVienHanhChinh_H
#define NhanVienHanhChinh_H
#include "CanBo.h"
class NhanVienHanhChinh:public CanBo{
	private:
		string PhongBan,ChucVu;
		short SoNgayCong;
	public:
		void Nhap();
		void Xuat(ostream& os);
		int TinhLuong();
		NhanVienHanhChinh();
};

void NhanVienHanhChinh::Nhap(){
	CanBo:Nhap();
	cout << "Nhap phong ban:\n";
	getline(cin,this->PhongBan);
	cout << "Nhap so ngay cong:\n";
	cin >> this->SoNgayCong;
	int ChonChucVu;
	do{
		cout << "Chon chuc vu:\n";
		cout << "1. Truong phong\n";
		cout << "2. Pho phong\n";
		cout << "3. Nhan vien\n";
		cin >> ChonChucVu;
		switch(ChonChucVu){
			case 1: this->ChucVu="Truong phong\n"; this->PhuCap=2000; break;
			case 2: this->ChucVu="Pho phong\n"; this->PhuCap=1000; break;
			case 3: this->ChucVu="Nhan vien\n"; this->PhuCap=500; break;
			default: cout << " Chon khong dung. Hay chon lai\n"; break;
		}
	}while(ChonChucVu<1 || ChonChucVu>3);	
}
void NhanVienHanhChinh::Xuat(ostream& os){
	CanBo::Xuat(os);
	os <<"Phong ban: " << this->PhongBan <<endl;
	os <<"So ngay cong: " << this->SoNgayCong <<endl;
	os <<"Chuc vu: " << this->ChucVu <<endl;
}
int NhanVienHanhChinh::TinhLuong(){
	return HeSoLuong *730 +PhuCap +SoNgayCong*200;
} 

NhanVienHanhChinh::NhanVienHanhChinh():CanBo(){
	this->ChucVu="Nhan Vien";
	this->SoNgayCong=0;
	this->PhongBan="NULL";
}

#endif
