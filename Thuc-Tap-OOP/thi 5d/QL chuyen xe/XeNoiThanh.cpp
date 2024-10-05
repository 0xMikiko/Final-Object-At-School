#include "Xe.cpp"



class XeNoiThanh:public Xe{
    friend ostream& operator<<(ostream&,const XeNoiThanh&);
    friend istream& operator>>(istream&, XeNoiThanh&);
    protected:
        int sokm;
        int sotuyen;
        int doanhthu;
        Xe rip;
    public:
        XeNoiThanh();
        XeNoiThanh(string,string,string,int,int);
        void setsokm(int);
		int getsokmn();
        void setsotuyen(int);
        int getsotuyen();
        void setdoanhthu(int);
		int getdoanhthu();
};

void XeNoiThanh::setsokm(int nd){
	sokm=nd;
}
void XeNoiThanh::setsotuyen(int sn){
	sotuyen=sn;
}
int XeNoiThanh::getsokmn(){
	return sokm;
}
int XeNoiThanh::getsotuyen(){
	return sotuyen;
}
void XeNoiThanh::setdoanhthu(int ms){
	doanhthu=ms;
}
int XeNoiThanh::getdoanhthu(){
	return doanhthu;
}

ostream& operator<<(ostream& out, const XeNoiThanh& xe){
	out<<xe.rip;
    out<<"So km: "<<xe.sokm<<endl;
    out<<"So tuyen: "<<xe.sotuyen<<endl;
    out << "Doanh thu: " << xe.doanhthu << endl;
    out<<"----------------------------------\n";
    return out;
}

istream& operator>>(istream& in, XeNoiThanh& xe){
    in>>xe.rip;
    cout<<"So km: ";in>>xe.sokm;
    cout<<"So tuyen: ";in>>xe.sotuyen;
    xe.doanhthu=xe.sokm*10000*xe.sotuyen;
    return in;
}

XeNoiThanh::XeNoiThanh(){
    maso="NULL";
    tentaixe="NULL";
    soxe="NULL";
    sotuyen=sokm=0;
    doanhthu=sokm*10000*sotuyen;
}

XeNoiThanh::XeNoiThanh(string ms, string ttx, string sx, int nd, int sn):Xe(ms,ttx,sx){
    sotuyen=nd;
    sokm=sn;
    doanhthu=sokm*10000*sotuyen;;
}
