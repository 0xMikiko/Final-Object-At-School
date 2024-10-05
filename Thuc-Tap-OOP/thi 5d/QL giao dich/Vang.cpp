#include "GiaoDich.cpp"
class Vang: public GiaoDich{
    friend ostream& operator<<(ostream&,const Vang&);
    friend istream& operator>>(istream&, Vang&);
    protected:
        int soluong;
        string loaivang;
        int trigia;
        GiaoDich a;
    public:
        Vang();
        Vang(string, Date, int, int, string, int);
        void setSoLuong(int);
        void setLoai(string);
        void setTriGia(int);
        int getSoLuong();
        string getLoai();
        int getTriGia();
};
Vang::Vang(){
    soluong=0;
    loaivang="NULL";
    trigia=0;
}
Vang::Vang(string m, Date d, int g, int sl, string l, int t):GiaoDich(m,d,g){
    soluong=sl;
    loaivang=l;
    trigia=t;
}
void Vang::setSoLuong(int sl){
	soluong=sl;
}

void Vang::setLoai(string l){
	loaivang=l;
}
void Vang::setTriGia(int trg){
	trigia=trg;
}
int Vang::getSoLuong(){
	return soluong;
}

string Vang::getLoai(){
	return loaivang;
}
int Vang::getTriGia(){
	return trigia;
}
istream& operator>>(istream& in, Vang& vang){
	in>>vang.a;
    in.ignore();
    cout<<"Nhap so luong tien: ";in>>vang.soluong;
    fflush(stdin);
    cout<<"Nhap loai tien: ";getline(in, vang.loaivang);
    vang.trigia=vang.soluong*vang.dongia;
    return in;
}
ostream& operator<<(ostream& out,const Vang& vang){
    out <<vang.a;
    out<<"Tien loai: "<<vang.loaivang<<endl;
    out<<"So luong: "<<vang.soluong<<endl;
    out<<"Tri gia: "<<vang.trigia<<endl;
    out<<"---------------------------------------------------"<<endl;
    return out;
}
