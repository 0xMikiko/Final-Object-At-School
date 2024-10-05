#include "HoGD.cpp"
#include "BienLai.cpp"
#include <vector>

class QuanLy{
	private:
		vector<BienLai> BL;
	public:
		QuanLy(){}
		void ThemBL();
		void XuatBL();
		void Xoa();
		void Sua();
		void SapXep();
		void TimKiem();
		void Run();
};
void QuanLy::ThemBL(){
	BienLai gd; 
	cin >> gd; 
	BL.push_back(gd);
}

void QuanLy::XuatBL(){
	int size=BL.size();
	for(int i=0;i<size;i++){
		cout <<"\nBien lai gia dinh thu "<<i+1<<endl;
		cout<<BL[i];
	}
}
void QuanLy::Xoa(){
	cout <<"\nNhap ten can xoa: ";
	string name;
	fflush(stdin);
	getline(cin,name);
	cout <<"\nNhap so nha can xoa: ";
	int sonha;cin>>sonha;
	int size = BL.size();
	for(int i=0;i<=size-1;i++){
		if(BL[i].getTen()==name&&BL[i].getSoNha()==sonha){
			cout<<"\nDa tim thay ho gia dinh "<<name;
			BL.erase(BL.begin()+i);
		}else{
			cout<<"\nKhong tim thay ho gia dinh "<<name;
		}

	}
}
void QuanLy::Sua(){
	BienLai bl;
	cout<<"Nhap lai cac thong tin can sua";
	cin>>bl;
	int size=BL.size();
	for(int i=0;i<size;i++){
		if(BL[i].getTen()==bl.getTen()){
			BL[i]=bl;
		}
		
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
	fflush(stdin);
	getline(cin,name);
	int size = BL.size();
	for(int i=0;i<=size-1;i++){
		if(BL[i].getTen()==name){
			cout<<"\nDa tim thay ho gia dinh "<<name;
			cout <<BL[i];
		}else{
			cout<<"\nKhong tim thay ho gia dinh "<<name;
		}

	}
}
void QuanLy::Run(){
	int luachon;
	bool check=true;
	do{
		system("cls");
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin ho gia dinh";
		cout <<"\n2.Xuat thong tin ho gia dinh";
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
		if(luachon==1)		ThemBL();
		
		if(luachon==2){XuatBL();system("pause");
		}		
		
		if(luachon==3){SapXep();system("pause");
		}		
		
		if(luachon==4){TimKiem();system("pause");
		}	
		if(luachon==5){Sua();system("pause");
		}		
		
		if(luachon==6){Xoa();system("pause");
		}	
		
		if(luachon==7){check=false;break;}
		
	}while(check);
}
int main(){
	QuanLy DuongQuangMinh;
	DuongQuangMinh.Run();
}
