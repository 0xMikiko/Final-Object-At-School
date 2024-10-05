
#include"HangHoa.h"
#include"ThucPham.h"
#include"MayMac.h"
#include"DienMay.h"
#include<vector>
#include <algorithm>


class QuanLyHangHoa:public HangHoa{
private:
	vector<HangHoa*> L;
public:
	void PrintMenu();
	void SubMenu();
	void Input();
	void Output();
	void SearchTP();
	void SearchDM();
	void SearchMM();
	void Add(HangHoa*);
	bool Edit(string);
	bool Del(string);
	void GTton_MAX();
	void SapXep1();
};
//void QuanLyHangHoa::Input()
//{
//	char c;
//	cout<<"1-->Thuc pham\n";
//	cout<<"2-->Dien may\n";
//	cout<<"!(1,2)-->May mac\n";
//	do
//	{
//		int choise;
//		cout<<"\nVui long nhap lua chon: ";
//		cin>>choise;
//		if(choise==1)
//		{
//			L.push_back(new ThucPham);
//			cin.ignore(32767, '\n');
//			L[L.size()-1]->Input();
//		}
//		else if(choise==2)
//		{
//			L.push_back(new DienMay);
//			cin.ignore(32767, '\n');
//			L[L.size()-1]->Input();
//		}
//		else
//		{
//			L.push_back(new MayMac);
//			cin.ignore(32767, '\n');
//			L[L.size()-1]->Input();
//		}
//		cout<<"\nContinue?Y/N? ";
//		cin>>c;
//	}while(c=='y');
//}
//template <class T>
//void HoanVi(T &a,T &b){
//	T Temp=a;
//	a=b;
//	b=Temp;
//}
//void QuanLyHangHoa::SapXep(){
//	int size = L.size();
//	for(int i=0;i<size-1;i++){
//		for(int j=i+1;j<size;j++){
//			if(L[i]->get_TGton()<L[j]->get_TGton()){
//				HoanVi<HangHoa>(L[i],L[j]);
//			}
//		}	
//	}
////	XuatBL();
//}
void MenuHeader(){
	cout << endl << "__________________________________________"    << endl;
	cout << 		"             Duong Quang Minh" 				    << std::endl;
	cout <<  		"       Lop Bao Dam An Toan Thong Tin" 				<< std::endl;																																																	
	cout <<   	    "_________________[MENU]___________________"    << endl;
}

void MainMenu(){
	system("cls");
	MenuHeader();
	cout<<	       "    [1]: Quan Ly Kho Hang Hoa             " << endl;
	cout<<	  	   "    [2]: Xuat Du Lieu Kho Hang            " << endl;
	cout<<	  	   "    [3]: Thoat                            " << endl;
	cout<<         "__________________________________________"<< endl;
	cout<<		   "   Nhap Lua Chon: ";
}

void QuanLyHangHoa::SubMenu(){
	int c, add;
	string maHH;
	do{
	system("cls");
	MenuHeader();
	cout<<	       "    [1]: Them Hang Hoa             " << endl;
	cout<<	  	   "    [2]: Sua Hang Hoa              " << endl;
	cout<<	  	   "    [3]: Xoa Hang Hoa              " << endl;
	cout<<	  	   "    [4]: Quay Lai                  " << endl;
	cout<<         "__________________________________________"<< endl<< endl;
	cout<<		   "   Nhap Lua Chon: ";
		cin >> c;
		cin.clear();
		if(cin.fail()){
			cin.ignore();
			cin.clear();
			continue;
		}
		cout<<         "__________________________________________"<< endl ;
		switch(c){
			case 1 :
				cout<<"    [1]: Thuc Pham             " << endl;
				cout<<"    [2]: Dien May            " << endl;
				cout<<"    [3]: May Mac            " << endl;
				cout<<"__________________________________________"<< endl<< endl ;
				cout<< "   Nhap Lua Chon: ";
				cin >> add;
				cout<<         "__________________________________________"<< endl;
				if(add==1)
				{
					L.push_back(new ThucPham);
					cin.ignore(32767, '\n');
					L[L.size()-1]->Input();
					cout << endl <<"  Them Hang Hoa Thanh Cong!" << endl;
				}
				else if(add==2)
				{
					L.push_back(new DienMay);
					cin.ignore(32767, '\n');
					L[L.size()-1]->Input();
					cout << endl <<"  Them Hang Hoa Thanh Cong!" << endl;
				}
				else if(add==3)
				{
					L.push_back(new MayMac);
					cin.ignore(32767, '\n');
					L[L.size()-1]->Input();
					cout << endl <<"  Them Hang Hoa Thanh Cong!" << endl;
				}
				else
				cout << "  Input khong hop le! ...." << endl;
				cout << endl;
				system("pause");
				break;
			case 2 :
				cout<< "   Nhap Ma Hang Hoa Chinh Sua: ";
				fflush(stdin);
				getline(cin, maHH);
				if(!Edit(maHH))
					cout << " Ma Hang Hoa khong ton tai";
				cout<<endl;
				system("pause");
				break;
			case 3 : 
				cout<< "   Nhap Ma Hang Hoa Xoa: ";
				getline(cin, maHH);
				if(!Del(maHH))
					cout << " Ma Hang Hoa khong ton tai";
				cout<<endl;
				system("pause");
				break;
			case 4 : 
				return;
			default:
				break;
		}
	}while(1);

}

void QuanLyHangHoa::PrintMenu(){
	do{
	system("cls");
	MenuHeader();
	cout<<	       "    [1]: Tat ca                    " << endl;
	cout<<	  	   "    [2]: Thuc Pham                 " << endl;
	cout<<	  	   "    [3]: May Mac                   " << endl;
	cout<<	  	   "    [4]: Dien May                  " << endl;
	cout<<	  	   "    [5]: Tri Gia Ton Kho Lon Nhat  " << endl;
	cout<<         "__________________________________________"<< endl;
	cout<<		   "   Nhap Lua Chon: ";
	int c;
	cin.clear();
		cin >> c;
		cout<<         "__________________________________________"<< endl;
		if(cin.fail()){
			cin.ignore();
			cin.clear();
			continue;
		}
		switch(c){
			case 1 :
				Output();
				cout<<endl;
				system("pause");
				break;
			case 2 :
				SearchTP();
				cout<<endl;
				system("pause");
				break;
			case 3 : 
				SearchMM();
				cout<<endl;
				system("pause");
				break;
			case 4 : 
				SearchDM();
				cout<<endl;
				system("pause");
				break;
			case 5 : 
				SearchDM();
				cout<<endl;
				system("pause");
				break;
			default:
				break;
		}
	}while(1);
}

void QuanLyHangHoa::Input()
{
	int c;
	do{
		system("cls");
		MainMenu();
		cin >> c;
		if(cin.fail()){
			cin.ignore();
			cin.clear();
			continue;
		}
		switch(c){
			case 1 :
				SubMenu();
				break;
			case 2 :
				PrintMenu();
				break;
			case 3 : 
				exit(0);
				break;
			default:
				break;
		}
	}while(1);
	
}
void QuanLyHangHoa::Add(HangHoa* a)
{
	L.push_back(a);
}
bool QuanLyHangHoa::Edit(string mhh)
{
	int i = 0, b= 0;
	while(i!=L.size())
	{
		if(L[i]->get_maHH()==mhh)
		{
			cin.ignore(32767, '\n');
			L[i]->Input();
			i++;
			b = 1;
		}
		else
			i++;
	}
	return b;
}
bool QuanLyHangHoa::Del(string mhh)
{
	int i = 0, b= 0;
	while(i!=L.size())
	{
		if(L[i]->get_maHH()==mhh){
			L.erase(L.begin() + i);
			b = 1;
			i++;
			}
		else
			i++;
	}
	return b;
}
void QuanLyHangHoa::Output()
{
	for(int i = 0; i<L.size(); i++)
	{
		L[i]->Output();
	}
}

void QuanLyHangHoa::SearchTP()
{
	for(int i = 0; i<L.size(); i++)
	{		
		if(L[i]->ID()=="ThucPham")
		{
			L[i]->Output();
		}
	}
}
void QuanLyHangHoa::SearchDM()
{
	for(int i = 0; i<L.size(); i++)
	{
		if(L[i]->ID()=="DienMay")
		{
			L[i]->Output();

		}
	}
}
void QuanLyHangHoa::SearchMM()
{
	for(int i = 0; i<L.size(); i++)
	{
		if(L[i]->ID()=="MayMac")
		{
			L[i]->Output();
	
		}
	}
}
//void QuanLyHangHoa::SapXep1()
//{
//	for(int i = 0; i<L.size(); i++)
//	{
//		for(int j=i+1;j<size;j++){
//			if(L[i]->ID()=="MayMac"){
//			L[i]->get_TGton();
//	
//			}	
//		}
//	
//	}
//}
bool CompareGTt(HangHoa *obj1, HangHoa *obj2)
{
	return obj1->get_TGton()<obj2->get_TGton();
}

void QuanLyHangHoa::GTton_MAX()
{
	HangHoa* max = *max_element(L.begin(), L.end(), CompareGTt);
	for(int i = 0; i<L.size(); i++)
		if(L[i]->get_TGton()==max->get_TGton())
			L[i]->Output();
}
