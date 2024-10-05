#include<iostream>
#include<string>
using namespace std;
class Sach{
    friend ostream& operator<<(ostream&,const Sach&);
    friend istream& operator>>(istream&, Sach&);
    protected:
        string maAp;
        string tenAp;
        string tenTg;
        int soT;
        string tenNXB;
    public:
        // Sach();
        // Sach(string,string,string,string,int);
        void setMaAp(string="X");
        void setTenAp(string="X");
        void setTenTg(string="X");
        void setTenNXB(string="X");
        void setSoT(int=0);
        string getMaAp();
        string getTenAp();
        string getTenTg();
        string getTenNXB();
        int getSoT();
};

// Sach::Sach(){}
// Sach::Sach(string mA, string tA, string tT, string tN, int tr ){
//     this->soT=tr;
//     this->maAp=mA;
//     this->tenAp=tA;
//     this->tenTg=tT;
//     this->tenNXB=tN;
// }

void Sach::setMaAp(string value){this->maAp=value;}
void Sach::setTenAp(string value){this->tenAp=value;}
void Sach::setTenTg(string value){this->tenTg=value;}
void Sach::setTenNXB(string value){this->tenNXB=value;}
void Sach::setSoT(int value){this->soT=value;}

string Sach::getMaAp(){return maAp;}
string Sach::getTenAp(){return tenAp;}
string Sach::getTenTg(){return tenTg;}
string Sach::getTenNXB(){return tenNXB;}
int Sach::getSoT(){return soT;}

ostream& operator<<(ostream& out, const Sach& s){
    out<<"-------------------------------"<<endl;
    out<<"Ten an pham: "<<s.tenAp<<endl;
    out<<"Ma ap pham: "<<s.maAp<<endl;
    out<<"Ten tac gia: "<<s.tenTg<<endl;
    out<<"Nha xuat ban: "<<s.tenNXB<<endl;
    out<<"So trang: "<<s.soT<<endl;
    out<<"-------------------------------"<<endl;
    return out;
}

istream& operator>>(istream& in, Sach& s){
    cout<<"-------------------------------"<<endl;
    in.ignore();
    cout<<"Nhap ten an pham: ";getline(in,s.tenAp);
    cout<<"Nhap ma an pham: ";getline(in,s.maAp);
    cout<<"Nhap ten tac gia: ";getline(in,s.tenTg);
    cout<<"Nhap NXB: ";getline(in,s.tenNXB);
    cout<<"Nhap so trang: ";in>>s.soT;
    cout<<"-------------------------------"<<endl;
    return in;
}