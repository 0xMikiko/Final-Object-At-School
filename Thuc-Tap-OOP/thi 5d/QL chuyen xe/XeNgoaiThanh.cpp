#include "Xe.cpp"


class XeNgoaiThanh:public Xe{
    friend ostream& operator<<(ostream&,const XeNgoaiThanh&);
    friend istream& operator>>(istream&, XeNgoaiThanh&);
    protected:
        string noiden;
        int songay;
        int doanhthu;

        Xe rip;
    public:
        XeNgoaiThanh();
        XeNgoaiThanh(string,string,string,string,int);
        void setnoiden(string);
		string getnoiden();
        void setsongay(int);
        int getsongay();
        void setdoanhthu(int);
		int getdoanhthu();
};

void XeNgoaiThanh::setnoiden(string nd){
	noiden=nd;
}
void XeNgoaiThanh::setsongay(int sn){
	songay=sn;
}
string XeNgoaiThanh::getnoiden(){
	return noiden;
}
int XeNgoaiThanh::getsongay(){
	return songay;
}
void XeNgoaiThanh::setdoanhthu(int ms){
	doanhthu=ms;
}
int XeNgoaiThanh::getdoanhthu(){
	return doanhthu;
}

ostream& operator<<(ostream& out, const XeNgoaiThanh& xe){
	out<<xe.rip;
    out<<"Noi den: "<<xe.noiden<<endl;
    out<<"So ngay di: "<<xe.songay<<endl;
    out << "Doanh thu: " << xe.doanhthu << endl;
    out<<"----------------------------------\n";
    return out;
}

istream& operator>>(istream& in, XeNgoaiThanh& xe){
    in>>xe.rip;
    cout<<"Nhap noi den: ";getline(in,xe.noiden);
    cout<<"Nhap so ngay di: ";in>>xe.songay;
    xe.doanhthu=xe.songay*50000;
    return in;
}

XeNgoaiThanh::XeNgoaiThanh(){
    maso="NULL";
    tentaixe="NULL";
    soxe="NULL";
    noiden="NULL";
    songay=0;
    doanhthu=songay*50000;
}

XeNgoaiThanh::XeNgoaiThanh(string ms, string ttx, string sx, string nd, int sn):Xe(ms,ttx,sx){
    noiden=nd;
    songay=sn;
    doanhthu=songay*50000;
}
