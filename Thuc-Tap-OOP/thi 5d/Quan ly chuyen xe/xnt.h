#ifndef __xnt_H__
#define __xnt_H__

#include<iostream>
#include<string>
#include"xe.h"
using namespace std;
class XeNoiTinh:public Xe{
    friend ostream& operator<<(ostream&,const XeNoiTinh&);
    friend istream& operator>>(istream&, XeNoiTinh&);
    protected:
        int sotuyen;
        int sokm;
    public:
        XeNoiTinh();
        XeNoiTinh(string,string,string,int,int);
        void setST(int);
        void setKM(int);
        int getST();
        int getKM();
};

void XeNoiTinh::setST(int st){sotuyen=st;}
void XeNoiTinh::setKM(int km){sokm=km;}
int XeNoiTinh::getST(){return sotuyen;}
int XeNoiTinh::getKM(){return sokm;}

ostream& operator<<(ostream& out, const XeNoiTinh& xnt){
    out<<"Ma so chuyen xe: "<<xnt.maso<<endl;
    out<<"Ho ten tai xe: "<<xnt.tentx<<endl;
    out<<"So xe: "<<xnt.soxe<<endl;
    out<<"So tuyen: "<<xnt.sotuyen<<endl;
    out<<"So km di duoc: "<<xnt.sokm<<endl;
    out<<"----------------------------------\n";
    return out;
}

istream& operator>>(istream& in, XeNoiTinh& xnt){
    in.ignore();
    cout<<"Nhap ma so chuyen xe: ";getline(in,xnt.maso);
    cout<<"Nhap ten tai xe: ";getline(in,xnt.tentx);
    cout<<"Nhap so xe: ";getline(in,xnt.soxe);
    cout<<"Nhap so tuyen: ";in>>xnt.sotuyen;
    cout<<"Nhap so km di duoc: ";in>>xnt.sokm;
    xnt.doanhthu=xnt.sokm*2;
    return in;
}

XeNoiTinh::XeNoiTinh(){
    maso="X";
    tentx="X";
    soxe="X";
    sotuyen=0;
    sokm=0;
    doanhthu=sokm*2;
}

XeNoiTinh::XeNoiTinh(string ms, string ttx, string sx,int st, int skm):Xe(ms,ttx,sx){
    sotuyen=st;
    sokm=skm;
    doanhthu=sokm*2;
}

#endif