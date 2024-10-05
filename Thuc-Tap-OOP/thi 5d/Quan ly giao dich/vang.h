#ifndef __vang__H__
#define __vang__H__

#include<iostream>
#include<string>
using namespace std;
class Vang: public GD{
    friend ostream& operator<<(ostream&,const Vang&);
    friend istream& operator>>(istream&, Vang&);
    protected:
        int soluong;
        int loai;
        long long trigia;
    public:
        Vang();
        Vang(string, Date, long long, int, int, long long);
        void setSoluong(int);
        void setLoai(int);
        void setTriGia(long long);
        int getSoLuong();
        int getLoai();
        long long getTrigia();
};
Vang::Vang(){
    soluong=0;
    loai=1;
    trigia=0;
}
Vang::Vang(string m, Date d, long long g, int sl, int l, long long tg):GD(m,d,g){
    soluong=sl;
    loai=l;
    trigia=tg;
}
void Vang::setSoluong(int sl){soluong=sl;}
void Vang::setLoai(int l){loai=l;}
void Vang::setTriGia(long long tg){trigia=tg;}
int Vang::getSoLuong(){return soluong;}
int Vang::getLoai(){return loai;}
long long Vang::getTrigia(){return trigia;}
istream& operator>>(istream& in, Vang& vang){
    in.ignore();
    cout<<"Nhap ma giao dich: ";getline(in,vang.maGD);
    cout<<"Nhap ngay, thang, nam giao dich: ";in>>vang.ngayGD.day>>vang.ngayGD.month>>vang.ngayGD.year;
    cout<<"Nhap don gia: ";in>>vang.dongia;
    cout<<"Nhap loai vang: ";in>>vang.loai;
    cout<<"Nhap so luong: ";in>>vang.soluong;
    vang.trigia=vang.soluong*vang.loai;
    return in;
}
ostream& operator<<(ostream& out,const Vang& vang){
    out<<"Ma giao dich: "<<vang.maGD<<endl;
    out<<"Ngay giao dich: "<<vang.ngayGD.day<<"/"<<vang.ngayGD.month<<"/"<<vang.ngayGD.year<<endl;
    out<<"Don gia: "<<vang.dongia<<endl;
    out<<"Vang loai: "<<vang.loai<<endl;
    out<<"So luong: "<<vang.soluong<<endl;
    out<<"Tri gia: "<<vang.trigia<<endl;
    out<<"---------------------------------------------------"<<endl;
    return out;
}

#endif