#include "GiaoDich.cpp"
class Tien: public GiaoDich{
    friend ostream& operator<<(ostream&,const Tien&);
    friend istream& operator>>(istream&, Tien&);
    protected:
        int soluong;
        float tygia;
        string loaitien;
        int trigia;
        GiaoDich a;
    public:
        Tien();
        Tien(string, Date, int, int, float, string, int);
        void setSoLuong(int);
        void setTyGia(float);
        void setLoai(string);
        void setTriGia(int);
        int getSoLuong();
        float getTyGia();
        string getLoai();
        int getTriGia();
};
Tien::Tien(){
    soluong=0;
    tygia=0;
    loaitien="NULL";
    trigia=0;
}
Tien::Tien(string m, Date d, int g, int sl, float tg, string l, int t):GiaoDich(m,d,g){
    soluong=sl;
    tygia=tg;
    loaitien=l;
    trigia=t;
}
void Tien::setSoLuong(int sl){
	soluong=sl;
}
void Tien::setTyGia(float tg){
	tygia=tg;
}
void Tien::setLoai(string l){
	loaitien=l;
}
void Tien::setTriGia(int trg){
	trigia=trg;
}
int Tien::getSoLuong(){
	return soluong;
}
float Tien::getTyGia(){
	return tygia;
}
string Tien::getLoai(){
	return loaitien;
}
int Tien::getTriGia(){
	return trigia;
}
istream& operator>>(istream& in, Tien& tien){
	in>>tien.a;
    in.ignore();
    cout<<"Nhap so luong tien: ";in>>tien.soluong;
    fflush(stdin);
    cout<<"Nhap loai tien: ";getline(in, tien.loaitien);
    cout<<"Nhap ty gia: ";in>>tien.tygia;
    tien.trigia=tien.soluong*tien.tygia*tien.dongia;
    return in;
}
ostream& operator<<(ostream& out,const Tien& tien){
    out <<tien.a;
    out<<"Tien loai: "<<tien.loaitien<<endl;
    out<<"So luong: "<<tien.soluong<<endl;
    out<<"Ty gia: "<<tien.tygia<<endl;
    out<<"Tri gia: "<<tien.trigia<<endl;
    out<<"---------------------------------------------------"<<endl;
    return out;
}
