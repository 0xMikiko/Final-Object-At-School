#ifndef __dat__H__
#define __dat__H__

#include<iostream>
#include<string>
using namespace std;

class Dat: public GD{
    friend ostream& operator<<(ostream&,const Dat&);
    friend istream& operator>>(istream&, Dat&);
    protected:
        int loai;
        float S;
    public:
        Dat();
        Dat(string, Date, long long, int, float);
        void setLoai(int);
        void setS(float);
        int getLoai();
        float getS();
};

Dat::Dat(){
    loai=1;
    S=0;
}
Dat::Dat(string m, Date d, long long g, int l, float s):GD(m,d,g){
    loai=l;
    S=s;
}
void Dat::setLoai(int l){loai=l;}
void Dat::setS(float s){S=s;}
int Dat::getLoai(){return loai;}
float Dat::getS(){return S;}
istream& operator>>(istream& in, Dat& dat){
    in.ignore();
    cout<<"Nhap ma giao dich: ";getline(in,dat.maGD);
    cout<<"Nhap ngay, thang, nam giao dich: ";in>>dat.ngayGD.day>>dat.ngayGD.month>>dat.ngayGD.year;
    cout<<"Nhap don gia: ";in>>dat.dongia;
    cout<<"Nhap loai dat(1,2,3 ung voi A,B,C): ";in>>dat.loai;
    cout<<"Nhap dien tich: ";in>>dat.S;
    return in;
}
ostream& operator<<(ostream& out,const Dat& dat){
    out<<"Ma giao dich: "<<dat.maGD<<endl;
    out<<"Ngay giao dich: "<<dat.ngayGD.day<<"/"<<dat.ngayGD.month<<"/"<<dat.ngayGD.year<<endl;
    out<<"Don gia: "<<dat.dongia<<endl;
    switch(dat.loai){
        case 1:
            out<<"Dat loai A"<<endl;
        break;
        case 2:
            out<<"Dat loai B"<<endl;
        break;
        case 3:
            out<<"Dat loai C"<<endl;
        break;
        default:
            out<<"Khong ton tai loai dat nay"<<endl;
    }
    out<<"Dien tich la: "<<dat.S<<endl;
    out<<"---------------------------------------------------"<<endl;
    return out;
}

#endif