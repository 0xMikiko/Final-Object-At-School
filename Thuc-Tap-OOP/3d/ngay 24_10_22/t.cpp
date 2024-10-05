#include"NhanSu.h"
#include"NhanVien.h"
#include"GiangVien.h"
#include<fstream>
#include<sstream>
string Menu[]=
{
	" 1: Them ho so        	   >",
	" 2: Tim kiem theo ma so   >",
	" 3: Dem so giang vien     >",
	" 4: Thoat"
};
void DisplayList(){
	for(int i=0;i<=3;i++){
		cout <<	Menu[i]<<endl ;
	}
}
//
//class NhanSu{ 
//	protected:
//		string Id;
//		string Name;
//		int Age;
//		string Gender;
//		string Address;
//	public:
//		void setId(string="x");
//		void setName(string="x");
//		void setAge(int=0);
//		void setGender(string="x");
//		void setAddress(string="x");
//		string getId();
//		string getName();
//		int getAge();
//		string getGender();
//		string getAddress();
//		
//};
//void NhanSu::setId(string id){this->Id=id;}
//void NhanSu::setName(string name){this->Name=name;}
//void NhanSu::setAge(int age){this->Age=age;}
//void NhanSu::setGender(string gender){this->Gender=gender;}
//void NhanSu::setAddress(string address){this->Address=address;}
//string NhanSu::getId(){return Id;}
//string NhanSu::getName(){return Name;}
//int NhanSu::getAge(){return Age;}
//string NhanSu::getGender(){return Gender;}
//string NhanSu::getAddress(){return Address;}
//
//class NhanVien:public NhanSu{
//	friend ostream& operator<<(ostream&,const NhanVien&);
//    friend istream& operator>>(istream&, NhanVien&);
//	protected:
//		int Bac;
//	public:
//		void setBac(int=0);
//		int getBac();
//};
//void NhanVien::setBac(int a){
//	this->Bac=a;
//}
//int NhanVien::getBac(){
//	return Bac;
//}
//ostream& operator<<(ostream& out,const NhanVien& N){
//    out<<"------------Nhan Vien--------"<<endl;
//    out<<"Ma so CB: "<<N.Id<<endl;
//    out<<"Ho ten: "<<N.Name<<endl;
//    out<<"Tuoi: "<<N.Age<<endl;
//    out<<"Gioi tinh: "<<N.Gender<<endl;
//    out<<"Dia chi: "<<N.Address<<endl; 
//	out<<"Bac: "<<N.Bac<<endl;
//    out<<"-------------------------------"<<endl;
//    return out;
//}
//istream& operator>>(istream& in, NhanVien& N){
//    cout<<"-----------Nhan Vien--------"<<endl;
//	in.ignore();
//    cout<<"Nhap ma so CB: ";getline(in,N.Id);
//    cout<<"Nhap ho ten: ";getline(in,N.Name);
//    cout<<"Nhap gioi tinh: ";getline(in,N.Gender);
//    cout<<"Nhap dia chi: ";getline(in,N.Address);
//    cout<<"Nhap tuoi: ";in>>N.Age;
//    cout<<"Nhap bac: ";in>>N.Bac;
//    cout<<"-------------------------------"<<endl;
//    return in;
//}
//
//class GiangVien:public NhanSu{
//    friend ostream& operator<<(ostream&,const GiangVien&);
//    friend istream& operator>>(istream&, GiangVien&);
//	protected:
//		string Nganh;
//		string HocHam;
//		string HocVi;
//	public:
//		void setNganh(string="x");
//		void setHocHam(string="x");
//		void setHocVi(string="x");
//		string getNganh();
//		string getHocHam();
//		string getHocVi();
//};
//
//void GiangVien::setNganh(string nganh){
//	this->Nganh=nganh;
//}
//void GiangVien::setHocHam(string HH){
//	this->HocHam=HH;
//}
//void GiangVien::setHocVi(string HV){
//	this->HocVi=HV;
//}
//
//string GiangVien::getNganh(){
//	return Nganh;
//}
//string GiangVien::getHocHam(){
//	return HocHam;
//}
//string GiangVien::getHocVi(){
//	return HocVi;
//}
//ostream& operator<<(ostream& out,const GiangVien& G){
//    out<<"-----------Giang Vien---------"<<endl;
//    out<<"Ma so CB: "<<G.Id<<endl;
//    out<<"Ho ten: "<<G.Name<<endl;
//    out<<"Tuoi: "<<G.Age<<endl;
//    out<<"Gioi tinh: "<<G.Gender<<endl;
//    out<<"Dia chi: "<<G.Address<<endl; 
//    out<<"Chuyen nganh: "<<G.Nganh<<endl;
//    out<<"Hoc ham: "<<G.HocHam<<endl;
//    out<<"Hoc vi: "<<G.HocVi<<endl; 
//    out<<"-------------------------------"<<endl;
//    return out;
//}
//istream& operator>>(istream& in, GiangVien& G){
//    cout<<"-----------Giang Vien----------"<<endl;
//    in.ignore();
//    cout<<"Nhap ma so CB: ";getline(in,G.Id);
//    cout<<"Nhap ho ten: ";getline(in,G.Name);
//    cout<<"Nhap gioi tinh: ";getline(in,G.Gender);
//    cout<<"Nhap dia chi: ";getline(in,G.Address);
//    cout<<"Nhap Chuyen nganh: ";getline(in,G.Nganh);
//    cout<<"Nhap Hoc ham: ";getline(in,G.HocHam);    
//    cout<<"Nhap Hoc vi: ";getline(in,G.HocVi); 
//	cout<<"Nhap tuoi: ";in>>G.Age;
//    cout<<"-------------------------------"<<endl;
//    return in;
//}
class QLHS{
	protected:
		NhanVien *N=new NhanVien[100];
		GiangVien *G=new GiangVien[100];
		int count_nv=0,count_gv=0;
	public:
		void Run();
		void ReadNV();
		void Them();
		
};
void QLHS::Run(){
	DisplayList();
	for(int i=0;;){
		int key; 
		key = getch();
		switch(key){
			case 49:Them(); break;
			case 50: break;
			case 51: break;
			case 53: exit(0);	
			}
		DisplayList();	
	}
}
void QLHS::ReadNV(){
	ifstream ifs("NV.txt");
	if(!ifs){
        cout << "Error: file not opened." << endl;
        return;
    }
    count_nv=0;
    while(!ifs.eof()){
        string line;
        getline(ifs,line);
        size_t pos = 0;
   	    string token;
        string arr[6];
        int i=0;
        while ((pos = line.find(",")) != string::npos) {
            token = line.substr(0, pos);
            arr[i]=token;
            line.erase(0, pos + 1);
            i++;
        }
            N[count_nv].setId(arr[0]);
            N[count_nv].setName(arr[1]);
            stringstream ss;ss<<arr[2];
            int num;ss>>num;
            N[count_nv].setAge(num);
            N[count_nv].setGender(arr[3]);
            N[count_nv].setAddress(arr[4]);
            ss<<arr[5];ss>>num;
            N[count_nv].setBac(num);
            count_nv++;
        }
        count_nv-=1;
        ifs.close();

}
void QLHS::Them(){
	cout << "Chon 1 neu la nhan vien - - Chon 2 neu giang vien"<<endl;
	int key;
	key=getch();
	if(key==49){
		NhanVien NV;cin>>NV;
	}else if (key==50){
		GiangVien GV;cin>>GV;
	}
}
int main(){
	QLHS a;
	a.Run();
}


