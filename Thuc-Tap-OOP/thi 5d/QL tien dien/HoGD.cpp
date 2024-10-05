#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;


class HoGiaDinh{
	friend ostream& operator<<(ostream& out, const HoGiaDinh& A);
    friend istream& operator>>(istream& in, HoGiaDinh& A);
	protected:
		string Ten;
		int SoNha;
		int MaSoCongTo;
		
	public:
		HoGiaDinh(void);
		~HoGiaDinh(void);
		HoGiaDinh(string, int, int);
		void setTen(string);
		string getTen();
		void setSoNha(int);
		int getSoNha();
		void setMaSoCongTo(int);
		int getMaSoCongTo();
		HoGiaDinh& operator=(const HoGiaDinh& A){
			Ten = A.Ten;
    		SoNha = A.SoNha;
    		MaSoCongTo = A.MaSoCongTo;
    		return *this;
		}

};
ostream& operator<<(ostream& out, const HoGiaDinh& A){
    out << "_____THONG TIN HO GIA DINH____" << endl;
    out << "Ten Ho Gia Dinh: " << A.Ten << endl;
    out << "So Nha: " << A.SoNha << endl;
    out << "Ma So Cong To: " << A.MaSoCongTo << endl;

    return out;
}
istream& operator>>(istream& in, HoGiaDinh& A){
    cout << "___NHAP THONG TIN HO GIA DINH___" << endl;
    in.ignore();
    cout << "Ten: "; getline(in, A.Ten);
    in.ignore();
    cout << "So Nha:: "; in >> A.SoNha;
	cout << "Ma So Cong To: "; in >> A.MaSoCongTo;
    return in;
}
HoGiaDinh::HoGiaDinh(){}
HoGiaDinh::~HoGiaDinh(){
	Ten="";
	SoNha=0;
	MaSoCongTo=0;
}
HoGiaDinh::HoGiaDinh(string a, int b, int c){
	Ten=a;
	SoNha=b;
	MaSoCongTo=c;
}

void HoGiaDinh::setSoNha(int sonha){
	SoNha=sonha;
}
void HoGiaDinh::setMaSoCongTo(int diem){
	MaSoCongTo=diem;
}
int HoGiaDinh::getSoNha(){
	return SoNha;
}
int HoGiaDinh::getMaSoCongTo(){
	return MaSoCongTo;
}
void HoGiaDinh::setTen(string ten){
	Ten=ten;
}
string HoGiaDinh::getTen(){
	return Ten;
}
