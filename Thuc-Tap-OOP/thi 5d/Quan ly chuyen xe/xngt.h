#ifndef __xngt__H__
#define __xngt__H__

#include<iostream>
#include<string>
#include"xe.h"
using namespace std;
class XeNgoaiTinh:public Xe{
    friend ostream& operator<<(ostream&,const XeNgoaiTinh&);
    friend istream& operator>>(istream&, XeNgoaiTinh&);
    protected:
        string noiden;
        int songay;
    public:
        XeNgoaiTinh();
        XeNgoaiTinh(string,string,string,string,int);
        void setND(string);
        void setSN(int);
        string getND();
        int getSN();
};

void XeNgoaiTinh::setND(string nd){noiden=nd;}
void XeNgoaiTinh::setSN(int sn){songay=sn;}
string XeNgoaiTinh::getND(){return noiden;}
int XeNgoaiTinh::getSN(){return songay;}

ostream& operator<<(ostream& out, const XeNgoaiTinh& xngt){
    out<<"Ma so chuyen xe: "<<xngt.maso<<endl;
    out<<"Ho ten tai xe: "<<xngt.tentx<<endl;
    out<<"So xe: "<<xngt.soxe<<endl;
    out<<"Noi den: "<<xngt.noiden<<endl;
    out<<"So ngay di: "<<xngt.songay<<endl;
    out<<"Doanh thu: "<<xngt.doanhthu<<endl;
    out<<"----------------------------------\n";
    return out;
}

istream& operator>>(istream& in, XeNgoaiTinh& xngt){
    in.ignore();
    cout<<"Nhap ma so chuyen xe: ";getline(in,xngt.maso);
    cout<<"Nhap ten tai xe: ";getline(in,xngt.tentx);
    cout<<"Nhap so xe: ";getline(in,xngt.soxe);
    cout<<"Nhap noi den: ";getline(in,xngt.noiden);
    cout<<"Nhap so ngay di: ";in>>xngt.songay;
    xngt.doanhthu=xngt.songay*5;
    return in;
}

XeNgoaiTinh::XeNgoaiTinh(){
    maso="X";
    tentx="X";
    soxe="X";
    noiden="X";
    songay=0;
    doanhthu=songay*5;
}

XeNgoaiTinh::XeNgoaiTinh(string ms, string ttx, string sx, string nd, int sn):Xe(ms,ttx,sx){
    noiden=nd;
    songay=sn;
    doanhthu=songay*5;
}

#endif