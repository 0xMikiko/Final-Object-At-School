#include "DanhSachCanBo.h"

int main(){
	DanhSachCanBo qlcb;
	int chon;
	for(;;){
		system("cls");
		cout << "0. Thoat\n";
		cout << "1. Nhap danh sach\n";
		cout << "2. In danh sach ra man hinh\n";
		cout << "3. In danh sach ra file\n";
		cout << "Chon menu:\n";
		cin >> chon;
		switch(chon){
			case 1: qlcb.NhapDanhSach(); break;
			case 2: qlcb.InDanhSach(cout); system("pause"); break;
			case 3: {
				ofstream outfile; 
				outfile.open("DanhSach.txt");
				qlcb.InDanhSach(outfile);				
				outfile.close();
				break;
			}
			default:cout << " Chon khong dung. Hay chon lai\n"; break;
		}
		if(chon<0 || chon >4 ) return 0;
	}
}
