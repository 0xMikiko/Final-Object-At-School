#pragma once
#include "XeMay.cpp"
#include "Oto.cpp"
#include "XeTai.cpp"
#include<vector>
class QuanLy{
	private:
		vector<Oto> ds1;
		vector<XeMay> ds2;
		vector<XeTai> ds3;
	public:
		void Nhap();
		void Xuat();

		void Run();
		
	//tim kiem
};

void QuanLy::Nhap(){
	int luachon;
	do{
		system("cls");
        cout << "\n\n\t\t ============ Nhap them xe  ============";
		cout << "\n\t 1. O TO";
		cout << "\n\t 2. XE MAY";
		cout << "\n\t 3. XE TAI";
		cout << "\n\t 0. Thoat";
		cout << "\n\n\t\t ============     END    ============\n";
        cout<<"Chon: "; cin>>luachon;
        if(luachon==1){
        		Oto x;
        		cout<<"\n\n\t\t NHAP THONG TIN XE OTO\n";
        		cin >>x;
        		ds1.push_back(x);
        }else if(luachon==2){
        		XeMay y;
        		cout<<"\n\n\t\t NHAP THONG TIN XE MAY\n";
        		cin >>y;
        		ds2.push_back(y);
			}        	
		else if(luachon==3){
        	XeTai z;
        	cout<<"\n\n\t\t NHAP THONG TIN XE TAI\n";
        	cin >>z;
        	ds3.push_back(z);
		}else if(luachon==0) return;
		if(luachon<0||luachon>3) cout << "\nLua chon khong hop le. Xin kiem tra lai"; 
	}while(luachon<0||luachon>3);
}
void QuanLy::Xuat(){
	cout << "\n\n\t\t ===== DANH SACH XE OTO =====\n";
	for (int i = 0; i < ds1.size(); i++)	{
		cout << "\n\n\t\t THONG TIN XE OTO THU " << i + 1;
		cout <<ds1[i]; 
	}

	cout << "\n\n\t\t ===== DANH SACH XE MAY =====\n";
	for (int i = 0; i < ds2.size(); i++)	{
		cout << "\n\n\t\t THONG TIN XE MAY THU " << i + 1;
		cout <<ds2[i]; 
	}
	cout << "\n\n\t\t ===== DANH SACH XE TAI =====\n";
	for (int i = 0; i < ds3.size(); i++)	{
		cout << "\n\n\t\t THONG TIN XE MAY THU " << i + 1;
		cout <<ds3[i]; 
	}
}
void QuanLy::Run(){
	int luachon;
	bool check=true;
	do{
		system("cls");
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin xe";
		cout <<"\n2.Xuat thong tin xe";
//		cout <<"\n3.Sap xep thong tin ho gia dinh";
//		cout <<"\n4.Tim kiem thong tin ho gia dinh";
		cout <<"\n3.Thoat";
		cout <<"\n-------------------";
		do{
			cout << "\nNhap vao lua chon: ";
			cin >>luachon;
			if(luachon<1&&luachon>3){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon<1&&luachon>3);
		if(luachon==1)		Nhap();
		
		if(luachon==2){Xuat();system("pause");
		}		
		
//		if(luachon==3){SapXep();system("pause");
//		}		
//		
//		if(luachon==4){TimKiem();system("pause");
//		}		
		
		if(luachon==3){check=false;break;}
		
	}while(check);
}
int main(){
	QuanLy Minh;
	Minh.Run();
}
