#include"ThuePhong.cpp"
#include"HoaDon.cpp"
class QuanLy{
	private:
		vector<HoaDon> a;
	public:
		QuanLy(){}
		void Them();
		void Xuat();
		void SapXep();
		void TimKiem();
		void Run();
};
void QuanLy::Them(){
	HoaDon gd; 
	cin >> gd; 
	a.push_back(gd);
}

void QuanLy::Xuat(){
	int size=a.size();
	for(int i=0;i<size;i++){
		cout <<"\nBien lai gia dinh thu "<<i+1<<endl;
		cout<<a[i];
	}
}
//template <class T>
//void HoanVi(T &a,T &b){
//	T Temp=a;
//	a=b;
//	b=Temp;
//}
//void QuanLy::SapXep(){
//	int size = a.size();
//	for(int i=0;i<size-1;i++){
//		for(int j=i+1;j<size;j++){
//			if(BL[i].gettra()<BL[j].gettra()){
//				HoanVi<BienLai>(BL[i],BL[j]);
//			}
//		}	
//	}
//	Xuat();
//}
//void QuanLy::TimKiem(){
//	cout <<"\nNhap ten can tim: ";
//	string name;
//	int num=0;
//	fflush(stdin);
//	cin>>name;
//	int size = BL.size();
//	for(int i=0;i<size-1;i++){
//		cout <<BL[i].getTen();
//		if(BL[i].getTen()==name){
//			num++;
//			cout<<"\nDa tim thay ho gia dinh "<<name;
//			cout <<BL[i];
//		}else{
//			if(num==0)	cout<<"\nKhong tim thay ho gia dinh "<<name;
//		}
//	}
//}
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
		if(luachon==1)		Them();
		
		if(luachon==2){Xuat();system("pause");
		}		
		
//		if(luachon==3){SapXep();system("pause");
//		}		
//		
//		if(luachon==4){TimKiem();system("pause");
//		}		
		
		if(luachon==5){check=false;break;}
		
	}while(check);
}
int main(){
	QuanLy DuongQuangMinh;
	DuongQuangMinh.Run();
}
