#include "LopHoc.cpp"


int main(){
//	SinhVien x;
//	x.Nhap();
//	x.Xuat();

//	cin >>x;
//	cout <<x;
//	cout <<"\nDiem trung binh =" <<x.TinhDiemTrungBinh();
//	cout <<"\nXep loai: "<<x.XepLoai();



	LopHoc lh;
//	lh.Nhap();
//	lh.Xuat();
	
	
//	xuat hang hoc vien ma ta muon

//	string mssv;
//	fflush(stdin);
//	cout <<"\nNhap mssv can tim kiem";
//	getline(cin,mssv);
//	int kq=lh.XepHang(mssv);
//	if(kq==-1){
//		cout<<"\nKhong ton tai trong lop";
//	}
//	else{
//		cout <<"mssv"<<mssv<< "xep hang "<< kq << "trong lop hoc";
//		cout << lh.getds()[kq-1];
//	}
	
	
	ofstream FileOut;
	FileOut.open("output.txt",ios_base::out);
//	lh.ghiFile(FileOut);
	
	
	ifstream FileIn;
	FileIn.open("input.txt",ios_base::in);
	if(!FileIn){
		cout <<"\nKhong tim thay file input.txt";
		system("pause");
		return 0;
	}else{
		lh.docFile(FileIn);
	}
	FileIn.close();
	
	
//	lh.Nhap();
	lh.Xuat();
	lh.ghiFile(FileOut);
//	FileOut.close();
}
