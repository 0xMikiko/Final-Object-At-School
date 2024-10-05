#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;
class KhachThue{
	friend ostream& operator<<(ostream& out, const KhachThue& A);
    friend istream& operator>>(istream& in, KhachThue& A);
	private:
		string Ten;
		int NamSinh;
		int CMND;
		
	public:
	    KhachThue(){};
	    KhachThue(string, int, int, int);
	    ~KhachThue(){};
	    void setName(string ten) { Ten = ten; }
	    void setCCCD(int n) { CMND = n; }
	    void setNamsinh(int n) { NamSinh = n; }
	    string getname() { return Ten; }
	    int getCCCD() { return CMND; }
	    int getNamsinh() { return NamSinh; }
	    KhachThue& operator=(const KhachThue& KT){
	        Ten = KT.Ten;
	        CMND = KT.CMND;
	        NamSinh = KT.NamSinh;
	        return *this;
	    }
};



ostream& operator<<(ostream& out, const KhachThue& A){
    out << "_____THONG TIN KHACH THUE____" << endl;
    out << "Ten khach thue: " << A.Ten << endl;
    out << "Tuoi khach  thue: " << (2022-A.NamSinh) << endl;
    out << "CMND: " << A.CMND << endl;

    return out;
}
istream& operator>>(istream& in, KhachThue& A){
    cout << "___NHAP THONG TIN KHACH THUE___" << endl;
    fflush(stdin);
    cout << "Ten khach thue: "; getline(in, A.Ten);
    fflush(stdin);
    cout << "Nam sinh khach thue: "; in >> A.NamSinh;
	cout << "CMND: "; in >> A.CMND;
    return in;
}

