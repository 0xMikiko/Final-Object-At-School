#include<iostream>
#include<string>
using namespace std;
class DoAn{
    friend ostream& operator<<(ostream&,const DoAn&);
    friend istream& operator>>(istream&, DoAn&);
    protected:
        string maAp;
        string tenAp;
        string tenHv;
        int khoa;
        string cNganh;
    public:
       // DoAn();
        //DoAn(string="X",string="X",string="X",string="X",int=0);
        void setMaAp(string="X");
        void setTenAp(string="X");
        void setTenHV(string="X");
        void setKhoa(int=0);
        void setCNganh(string="X");
        string getMaAp();
        string getTenAp();
        string getTenHV();
        string getCNganh();
        int getKhoa();
};

ostream& operator<<(ostream& out,const DoAn& d){
    out<<"-------------------------------"<<endl;
    out<<"Ten an pham: "<<d.tenAp<<endl;
    out<<"Ma ap pham: "<<d.maAp<<endl;
    out<<"Ten hoc vien: "<<d.tenHv<<endl;
    out<<"Chuyen nganh: "<<d.cNganh<<endl;
    out<<"Khoa: "<<d.khoa<<endl;
    out<<"-------------------------------"<<endl;
    return out;
}

istream& operator>>(istream& in, DoAn& d){
    cout<<"-------------------------------"<<endl;
    in.ignore();
    cout<<"Nhap ten an pham: ";getline(in,d.tenAp);
    cout<<"Nhap ma an pham: ";getline(in,d.maAp);
    cout<<"Nhap ten hoc vien: ";getline(in,d.tenHv);
    cout<<"Nhap chuyen nganh: ";getline(in,d.cNganh);
    cout<<"Nhap khoa: ";in>>d.khoa;
    cout<<"-------------------------------"<<endl;
    return in;
}

// DoAn::DoAn(){}
// DoAn::DoAn(string mA, string tA, string tH, string tC, int k){
//     this->maAp=mA;
//     this->tenAp=tA;
//     this->tenHv=tH;
//     this->cNganh=tC;
//     this->khoa=k;
// }

void DoAn::setMaAp(string mA){this->maAp=mA;}
void DoAn::setTenAp(string tA){this->tenAp=tA;}
void DoAn::setTenHV(string tH){this->tenHv=tH;}
void DoAn::setCNganh(string tC){this->cNganh=tC;}
void DoAn::setKhoa(int k){this->khoa=k;}

string DoAn::getMaAp(){return maAp;}
string DoAn::getTenAp(){return tenAp;}
string DoAn::getTenHV(){return tenHv;}
string DoAn::getCNganh(){return cNganh;}
int DoAn::getKhoa(){return khoa;}