#ifndef __nha__H__
#define __nha__H__

#include<iostream>
#include<string>
using namespace std;
class Nha: public GD{
    friend ostream& operator<<(ostream&,const Nha&);
    friend istream& operator>>(istream&, Nha&);
    protected:
        int loai;
        string diachi;
        float S;
    public:
        Nha();
        Nha(string, Date, long long, int, string, float);
        void setLoai(int);
        void setDC(string);
        void setS(float);
        int getLoai();
        string getDC();
        float getS();
};

Nha::Nha(){
    loai=1;
    diachi="X";
    S=0;
}
Nha::Nha(string m, Date d, long long g, int l, string dc, float s):GD(m,d,g){
    loai=l;
    diachi=dc;
    S=s;
}
void Nha::setLoai(int l){loai=l;}
void Nha::setDC(string dc){diachi=dc;}
void Nha::setS(float s){S=s;}
int Nha::getLoai(){return loai;}
string Nha::getDC(){return diachi;}
float Nha::getS(){return S;}
istream& operator>>(istream& in, Nha& nha){
    in.ignore();
    cout<<"Nhap ma giao dich: ";getline(in,nha.maGD);
    cout<<"Nhap ngay, thang, nam giao dich: ";in>>nha.ngayGD.day>>nha.ngayGD.month>>nha.ngayGD.year;
    cout<<"Nhap don gia: ";in>>nha.dongia;
    cout<<"Nhap loai nha(1,2 ung voi cao cap,thuong): ";in>>nha.loai;
    in.ignore();
    cout<<"Nhap dia chi: ";getline(in,nha.diachi);
    cout<<"Nhap dien tich: ";in>>nha.S;
    return in;
}
ostream& operator<<(ostream& out,const Nha& nha){
    out<<"Ma giao dich: "<<nha.maGD<<endl;
    out<<"Ngay giao dich: "<<nha.ngayGD.day<<"/"<<nha.ngayGD.month<<"/"<<nha.ngayGD.year<<endl;
    out<<"Don gia: "<<nha.dongia<<endl;
    switch(nha.loai){
        case 1:
            out<<"Nha cao cap"<<endl;
        break;
        case 2:
            out<<"Nha thuong"<<endl;
        break;
        default:
            out<<"Khong ton tai loai nha nay"<<endl;
    }
    out<<"Dia chi nha: "<<nha.diachi<<endl;
    out<<"Dien tich la: "<<nha.S<<endl;
    out<<"---------------------------------------------------"<<endl;
    return out;
}


#endif