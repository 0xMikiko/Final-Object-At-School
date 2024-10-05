#include<iostream>
#include<string>
using namespace std;
class LuanVan : public DoAn{
    friend ostream& operator<<(ostream&,const LuanVan&);
    friend istream& operator>>(istream&, LuanVan&);
    protected:
        string bac;
    public:
        // LuanVan();
        // LuanVan(string="X",string="X",string="X",string="X",int=0,string="X");
//        void setBac(string="X");
//        string getBac();
};

ostream& operator<<(ostream& out,const LuanVan& l){
    out<<"-------------------------------"<<endl;
    out<<"Ten an pham: "<<l.tenAp<<endl;
    out<<"Ma ap pham: "<<l.maAp<<endl;
    out<<"Ten hoc vien: "<<l.tenHv<<endl;
    out<<"Chuyen nganh: "<<l.cNganh<<endl;
    out<<"Bac: "<<l.bac<<endl;
    out<<"Khoa: "<<l.khoa<<endl;
    out<<"-------------------------------"<<endl;
    return out;
}

istream& operator>>(istream& in, LuanVan& l){
    cout<<"-------------------------------"<<endl;
    in.ignore();
    cout<<"Nhap ten an pham: ";getline(in,l.tenAp);
    cout<<"Nhap ma an pham: ";getline(in,l.maAp);
    cout<<"Nhap ten hoc vien: ";getline(in,l.tenHv);
    cout<<"Nhap chuyen nganh: ";getline(in,l.cNganh);
    cout<<"Nhap bac: ";getline(in,l.bac);
    cout<<"Nhap khoa: ";in>>l.khoa;
    cout<<"-------------------------------"<<endl;
    return in;
}

// LuanVan::LuanVan(string mA, string tA, string tH, string tC, int k, string b):DoAn(mA,tA,tH,tC,k){
//     this->bac=b;
// }

//void LuanVan::setBac(string b){
//    this->bac=b;
//}
//
//string LuanVan::getBac(){
//    return bac;
//}
