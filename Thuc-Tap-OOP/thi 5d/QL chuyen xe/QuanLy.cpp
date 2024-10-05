#include "Xe.cpp"
#include "XeNgoaiThanh.cpp"
#include "XeNoiThanh.cpp"
#include <vector>

class QuanLy{
	private:
		vector<XeNoiThanh> ds1;
		vector<XeNgoaiThanh> ds2;
	public:
		QuanLy(){}
		void Nhap();
		
		void Xuat();
		void Xuat1();
		void Xuat2();
		
		void SapXep();
		void SapXep1();
		void SapXep2();
		void TimKiem();
		void Run();
};
void QuanLy::Nhap(){
	int luachon;
	do{
		system("cls");
        cout << "\n\n\t\t ============ Nhap them xe  ============";
		cout << "\n\t 1. XE NOI THANH ";
		cout << "\n\t 2. XE NGOAI THANH";
		cout << "\n\t 0. Thoat";
		cout << "\n\n\t\t ============     END    ============\n";
        cout<<"Chon: "; cin>>luachon;
        if(luachon==1){
        		XeNoiThanh x;
        		cout<<"\n\n\t\t NHAP THONG TIN XE NOI THANH\n";
        		cin >>x;
        		ds1.push_back(x);
        }else if(luachon==2){
        		XeNgoaiThanh y;
        		cout<<"\n\n\t\t NHAP THONG TIN XE NGOAI THANH\n";
        		cin >>y;
        		ds2.push_back(y);
		}else if(luachon==0) return;
		if(luachon<0||luachon>2) cout << "\nLua chon khong hop le. Xin kiem tra lai"; 
	}while(luachon<0||luachon>3);
}
void QuanLy::Xuat1(){
	cout << "\n\n\t\t ===== DANH SACH XE NOI THANH =====\n";
	for (int i = 0; i < ds1.size(); i++)	{
		cout << "\n\n\t\t THONG TIN XE NOI THANH THU " << i + 1;
		cout <<ds1[i]; 
	}
}
void QuanLy::Xuat2(){
	cout << "\n\n\t\t ===== DANH SACH XE NGOAI THANH =====\n";
	for (int i = 0; i < ds2.size(); i++)	{
		cout << "\n\n\t\t THONG TIN XE NGOAI THANH THU " << i + 1;
		cout <<ds2[i]; 
	}
}
void QuanLy::Xuat(){
	Xuat1();Xuat2();
}
template <class T>
void HoanVi(T &a,T &b){
	T Temp=a;
	a=b;
	b=Temp;
}
void QuanLy::SapXep1(){
	int size = ds1.size();
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(ds1[i].getdoanhthu()<ds1[j].getdoanhthu()){
				HoanVi<XeNoiThanh>(ds1[i],ds1[j]);
			}
		}	
	}
	Xuat1();
}
void QuanLy::SapXep2(){
	int size = ds2.size();
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(ds2[i].getdoanhthu()<ds2[j].getdoanhthu()){
				HoanVi<XeNgoaiThanh>(ds2[i],ds2[j]);
			}
		}	
	}
	Xuat2();
}
void QuanLy::SapXep(){
	SapXep1();SapXep2();
}


void QuanLy::Run(){
	int luachon;
	bool check=true;
	do{
		system("cls");
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin xe";
		cout <<"\n2.Xuat thong tin xe";
		cout <<"\n3.Sap xep thong tin ho gia dinh";
//		cout <<"\n4.Tim kiem thong tin ho gia dinh";
		cout <<"\n4.Thoat";
		cout <<"\n-------------------";
		do{
			cout << "\nNhap vao lua chon: ";
			cin >>luachon;
			if(luachon<1&&luachon>4){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon<1&&luachon>4);
		if(luachon==1)		Nhap();
		
		if(luachon==2){Xuat();system("pause");
		}		
		
		if(luachon==3){SapXep();system("pause");
		}		
//		
//		if(luachon==4){TimKiem();system("pause");
//		}		
		
		if(luachon==4){check=false;break;}
		
	}while(check);
}
int main(){
	QuanLy Minh;
	Minh.Run();
}
