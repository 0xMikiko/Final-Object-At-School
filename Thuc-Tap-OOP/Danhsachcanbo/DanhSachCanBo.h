#ifndef DanhSachCanBo_H
#define DanhSachCanBo_H
#include "GiangVien.h"
#include "NhanVienHanhChinh.h"
#include <vector>

class DanhSachCanBo{
	private:
		vector<CanBo*> ds;
		
	public:
		void NhapDanhSach();
		void InDanhSach(ostream& os);
		void ReadFile_GV();
		void ReadFile_NVHC();
		DanhSachCanBo();
		~DanhSachCanBo();
};

//void DanhSachCanBo::ReadFile_GV(){
//	ifstream danhsach;
//	danhsach.open("giangvien.txt");
//	if(danhsach.fail()){
//		cout << "Cant open file" << endl;
//		return;
//	}
//	else{
//		while(!danhsach.eof()){
//			int position =0;
//			string line,thongtin;
//			getline(danhsach,line);
//			while(position=line.find(";") != line.length()){
//				thongtin=line.substr(0,pos);
//				
//			}
//		}
//	}
//}
//
//
//
//
//

















void DanhSachCanBo::NhapDanhSach(){
	int chon;
	CanBo* p=NULL;
	do{
		cout << "\n0. Thoat nhap\n";
		cout << "1. Them giang vien\n";
		cout << "2. Them nhan vien hanh chinh\n";
		cout << "Chon menu:\n";
		cin >> chon;
		switch(chon){
			case 0: break;
			case 1: {
				p=new GiangVien;
				p->Nhap();
				ds.push_back(p);
				break;
			}
			case 2: {
				p=new NhanVienHanhChinh;
				p->Nhap();
				ds.push_back(p);
				break;
			}
			default: cout << "Chon menu sai. Chon lai!!!\n"; break;
		}
	}while(chon <0 || chon >2);
}
void DanhSachCanBo::InDanhSach(ostream& os){
	for(int i=0;i<ds.size();i++){
		ds[i]->Xuat(os);
		os << "----------------------------------\n\n";
	}	
}

DanhSachCanBo::DanhSachCanBo(){
	
}
DanhSachCanBo::~DanhSachCanBo(){
	this->ds.clear();
}

#endif
