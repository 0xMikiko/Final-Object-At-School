#include "Dat.cpp"
#include "Nha.cpp"
#include "Vang.cpp"
#include "Tien.cpp"
#include <vector>

class QuanLy{
	private:
		vector<Dat> ds1;
		vector<Nha> ds2;
		vector<Vang> ds3;
		vector<Tien> ds4;
	public:
		QuanLy(){}
		void Nhap();
		
		void Xuat();
		void Xuat1();
		void Xuat2();
		void Xuat3();
		void Xuat4();
		
		void SapXep();
		void SapXep1();
		void SapXep2();
		void SapXep3();
		void SapXep4();
		
		void TimKiem();
		void Run();
};
void QuanLy::Nhap(){
	int luachon;
	do{
		system("cls");
        cout << "\n\n\t\t ============ Nhap giao dich ============";
		cout << "\n\t 1. DAT ";
		cout << "\n\t 2. NHA";
		cout << "\n\t 3. VANG";
		cout << "\n\t 4. TIEN TE";
		cout << "\n\t 5. Thoat";
		cout << "\n\n\t\t ============     END    ============\n";
        cout<<"Chon: "; cin>>luachon;
        if(luachon==1){
        		Dat x;
        		cout<<"\n\n\t\t NHAP THONG TIN DAT\n";
        		cin >>x;
        		ds1.push_back(x);
        }else if(luachon==2){
        		Nha y;
        		cout<<"\n\n\t\t NHAP THONG TIN NHA\n";
        		cin >>y;
        		ds2.push_back(y);
		}else if(luachon==3){
        		Vang y;
        		cout<<"\n\n\t\t NHAP THONG TIN VANG\n";
        		cin >>y;
        		ds3.push_back(y);
    	}else if(luachon==2){
        		Tien y;
        		cout<<"\n\n\t\t NHAP THONG TIN TIEN TE\n";
        		cin >>y;
        		ds4.push_back(y);
    	}
		else if(luachon==5) return;
		if(luachon<0||luachon>5) cout << "\nLua chon khong hop le. Xin kiem tra lai"; 
	}while(luachon<0||luachon>5);
}

void QuanLy::Xuat(){
	cout << "\n\n\t\t ===== DANH SACH DAT =====\n";
	for (int i = 0; i < ds1.size(); i++)	{
		cout << "\n\n\t\t THONG TIN DAT THU " << i + 1;
		cout <<ds1[i]; 
	}
	
	cout << "\n\n\t\t ===== DANH SACH NHA =====\n";
	for (int i = 0; i < ds2.size(); i++)	{
		cout << "\n\n\t\t THONG TIN NHA THU " << i + 1;
		cout <<ds2[i]; 
	}
	
	cout << "\n\n\t\t ===== DANH SACH VANG =====\n";
	for (int i = 0; i < ds3.size(); i++)	{
		cout << "\n\n\t\t THONG TIN VANG THU " << i + 1;
		cout <<ds3[i]; 
	}
	
	cout << "\n\n\t\t ===== DANH SACH TIEN TE =====\n";
	for (int i = 0; i < ds4.size(); i++)	{
		cout << "\n\n\t\t THONG TIN TIEN TE THU " << i + 1;
		cout <<ds4[i]; 
	}
}
template <class T>
void HoanVi(T &a,T &b){
	T Temp=a;
	a=b;
	b=Temp;
}
void QuanLy::SapXep(){
	int size = BL.size();
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(BL[i].gettra()<BL[j].gettra()){
				HoanVi<BienLai>(BL[i],BL[j]);
			}
		}	
	}
	XuatBL();
}


void QuanLy::TimKiem(){
	cout <<"\nNhap ten can tim: ";
	string name;
	int num=0;
	fflush(stdin);
	cin>>name;
	int size = BL.size();
	for(int i=0;i<size-1;i++){
		cout <<BL[i].getTen();
		if(BL[i].getTen()==name){
			num++;
			cout<<"\nDa tim thay ho gia dinh "<<name;
			cout <<BL[i];
		}else{
			if(num==0)	cout<<"\nKhong tim thay ho gia dinh "<<name;
		}
	}
}
void QuanLy::Run(){
	int luachon;
	bool check=true;
	do{
		system("cls");
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin giao dich";
		cout <<"\n2.Xuat thong tin giao dich";
		cout <<"\n3.Sap xep thong tin ho gia dinh";
		cout <<"\n4.Tim kiem thong tin ho gia dinh";
		cout <<"\n5.Thoat";
		cout <<"\n-------------------";
		do{
			cout << "\nNhap vao lua chon: ";
			cin >>luachon;
			if(luachon<1&&luachon>5){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon<1&&luachon>5);
		if(luachon==1)		Nhap();
		
		if(luachon==2){Xuat();system("pause");
		}		
		
		if(luachon==3){SapXep();system("pause");
		}		
		
		if(luachon==4){TimKiem();system("pause");
		}		
		
		if(luachon==5){check=false;break;}
		
	}while(check);
}
int main(){
	QuanLy DuongQuangMinh;
	DuongQuangMinh.Run();
}
