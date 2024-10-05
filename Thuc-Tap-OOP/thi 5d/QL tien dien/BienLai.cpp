#include "HoGD.cpp"
class BienLai:public HoGiaDinh{
	friend ostream& operator<<(ostream&, const BienLai& );
	friend istream& operator>>(istream&, BienLai&);
	private:
		int SoDienCu;
		int SoDienMoi;
		int SoTienTra;
	public:
		BienLai(){}
		BienLai(string,int,int,int,int);
		void setcu(int);
		void setmoi(int);
		void settra(int);
		int getcu();
		int getmoi();
		int gettra();
		void InBienLai();
};
ostream& operator<<(ostream&out, const BienLai& A){
//	out <<A.rip;
	out << "_____THONG TIN HO GIA DINH____" << endl;
    out << "Ten Ho Gia Dinh: " << A.Ten << endl;
    out << "So Nha: " << A.SoNha << endl;
    out << "Ma So Cong To: " << A.MaSoCongTo << endl;
	out << "So Dien Cu: " << A.SoDienCu << endl;
    out << "So Dien Moi: " << A.SoDienMoi << endl;
    out << "So Tien Tra: " << A.SoTienTra*5000 << endl;
    return out;
}
istream& operator>>(istream&is, BienLai&A){
//	is>>A.rip;
	cout << "___NHAP THONG TIN HO GIA DINH___" << endl;
    is.ignore();
    cout << "Ten: "; getline(is, A.Ten);
    cout << "So Nha:: "; is >> A.SoNha;
	cout << "Ma So Cong To: "; is >> A.MaSoCongTo;
	cout << "So Dien Cu: "; is >> A.SoDienCu;
	
	do{
		cout << "So Dien Moi: "; 
		is >> A.SoDienMoi;
		if(A.SoDienMoi<A.SoDienCu){
			cout<<"Nhap sai roi. Nhap lai\n";
		}
	}while(A.SoDienMoi<A.SoDienCu);
	
	A.SoTienTra=A.SoDienMoi-A.SoDienCu;
	return is;
}
void BienLai::setcu(int a){SoDienCu=a;}
void BienLai::setmoi(int a){SoDienMoi=a;}
void BienLai::settra(int a){SoTienTra=a;}
int BienLai::getcu(){return SoDienCu;}
int BienLai::getmoi(){return SoDienMoi;}
int BienLai::gettra(){return SoDienMoi-SoDienCu;}

BienLai::BienLai(string hogd,int sonha,int maso,int cu,int moi):HoGiaDinh(hogd,sonha,maso){
	SoDienCu=cu;
	SoDienMoi=moi;
	SoTienTra=(moi-cu)*5000;	
}
void BienLai::InBienLai(){
	cout << "____Hoa don thanh toan_____" << endl;
	cout << "Ho gia dinh: " << getTen() << endl<<endl;
	cout << "So nha: " << getSoNha() << endl<<endl;
	cout << "Ma So Cong To: " << getMaSoCongTo() << endl<<endl;
	cout << "___________________________" << endl;
	cout << "So Dien Cu: " << SoDienCu << endl;
	cout << "So Dien Moi: " << SoDienMoi << endl;
	cout << "So tien phai tra: " << (SoDienMoi-SoDienCu)*5000 << endl;
	cout << "___________________________" << endl;

}
