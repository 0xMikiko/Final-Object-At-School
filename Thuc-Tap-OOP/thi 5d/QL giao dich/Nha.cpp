#include "GiaoDich.cpp"

using namespace std;

class Nha: public GiaoDich{
    friend ostream& operator<<(ostream&,const Nha&);
    friend istream& operator>>(istream&, Nha&);
    protected:
        string loainha;
        string diachi;
        double dientich;
        GiaoDich a;
    public:
        Nha();
        ~Nha();
        Nha(string, Date, int, string,string, double);
        void setloai(string);
        void setdiachi(string);
        void setdientich(double);
        string getloai();
        string getdiachi();
        double getdientich();
};

Nha::Nha(){
    loainha=1;
    dientich=0;
    diachi="NULL";
}
Nha::~Nha(){
 
}
Nha::Nha(string a,Date b,int c,string d,string f,double e):GiaoDich(a,b,c){
    loainha=d;
    dientich=e;
    diachi=f;
}
void Nha::setloai(string l){
	loainha=l;
}
void Nha::setdiachi(string l){
	diachi=l;
}
void Nha::setdientich(double s){
	dientich=s;
}
string Nha::getloai(){
	return loainha;
}
string Nha::getdiachi(){
	return diachi;
}
double Nha::getdientich(){
	return dientich;
}

istream& operator>>(istream& in, Nha& dat){
    in>>dat.a;
    in.ignore();
    int luachon;
    do{
    	cout << "\n\t 1. Nha cao cap";
		cout << "\n\t 2. Nha thuong";
		cout<<"Chon: "; cin>>luachon;
		if(luachon==1)	dat.loainha="Cao cap";
		if(luachon==2)	dat.loainha="Thuong";
	}while(luachon<1||luachon>2);
	fflush(stdin);
    cout << "Dia chi: "; getline(in, dat.diachi);
    cout<<"Nhap dien tich: ";in>>dat.dientich;
    return in;
}
ostream& operator<<(ostream& out,const Nha& dat){
    out<<dat.a;
    out<<"Loai nha"<<dat.loainha<<endl;
    out<<"Dien tich la: "<<dat.dientich<<endl;
    out<<"----------------------"<<endl;
    return out;
}
