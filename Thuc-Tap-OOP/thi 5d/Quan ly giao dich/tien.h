#ifndef __tien__H__
#define __tien__H__

#include<iostream>
#include<string>
using namespace std;

class Tien: public GD{
    friend ostream& operator<<(ostream&,const Tien&);
    friend istream& operator>>(istream&, Tien&);
    protected:
        int soluong;
        float tygia;
        int loai;
        long long trigia;
    public:
        Tien();
        Tien(string, Date, long long, int, float, int, long long);
        void setSoLuong(int);
        void setTyGia(float);
        void setLoai(int);
        void setTriGia(long long);
        int getSoLuong();
        float getTyGia();
        int getLoai();
        long long getTriGia();
};
Tien::Tien(){
    soluong=0;
    tygia=0;
    loai=1;
    trigia=0;
}
Tien::Tien(string m, Date d, long long g, int sl, float tg, int l, long long t):GD(m,d,g){
    soluong=sl;
    tygia=tg;
    loai=l;
    trigia=t;
}
void Tien::setSoLuong(int sl){soluong=sl;}
void Tien::setTyGia(float tg){tygia=tg;}
void Tien::setLoai(int l){loai=l;}
void Tien::setTriGia(long long trg){trigia=trg;}
int Tien::getSoLuong(){return soluong;}
float Tien::getTyGia(){return tygia;}
int Tien::getLoai(){return loai;}
long long Tien::getTriGia(){return trigia;}
istream& operator>>(istream& in, Tien& tien){
    in.ignore();
    cout<<"Nhap ma giao dich: ";getline(in,tien.maGD);
    cout<<"Nhap ngay, thang, nam giao dich: ";in>>tien.ngayGD.day>>tien.ngayGD.month>>tien.ngayGD.year;
    cout<<"Nhap don gia: ";in>>tien.dongia;
    cout<<"Nhap so luong tien: ";in>>tien.soluong;
    cout<<"Nhap loai tien: ";in>>tien.loai;
    cout<<"Nhap ty gia: ";in>>tien.tygia;
    tien.trigia=tien.soluong*tien.loai*tien.tygia;
    return in;
}
ostream& operator<<(ostream& out,const Tien& tien){
    out<<"Ma giao dich: "<<tien.maGD<<endl;
    out<<"Ngay giao dich: "<<tien.ngayGD.day<<"/"<<tien.ngayGD.month<<"/"<<tien.ngayGD.year<<endl;
    out<<"Don gia: "<<tien.dongia<<endl;
    out<<"Tien loai: "<<tien.loai<<endl;
    out<<"So luong: "<<tien.soluong<<endl;
    out<<"Ty gia: "<<tien.tygia<<endl;
    out<<"Tri gia: "<<tien.trigia<<endl;
    out<<"---------------------------------------------------"<<endl;
    return out;
}


#endif