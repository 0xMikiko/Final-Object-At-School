#include "GiaoDich.cpp"

using namespace std;

class Dat: public GiaoDich{
    friend ostream& operator<<(ostream&,const Dat&);
    friend istream& operator>>(istream&, Dat&);
    protected:
        string loai;
        double dientich;
        GiaoDich a;
    public:
        Dat();
        ~Dat();
        Dat(string, Date, int, string, double);
        void setloai(string);
        void setdientich(double);
        string getloai();
        double getdientich();
};

Dat::Dat(){
    loai=1;
    dientich=0;
}
Dat::~Dat(){
 
}
Dat::Dat(string a,Date b,int c,string d,double e):GiaoDich(a,b,c){
    loai=d;
    dientich=e;
}
void Dat::setloai(string l){
	loai=l;
}
void Dat::setdientich(double s){
	dientich=s;
}
string Dat::getloai(){
	return loai;
}
double Dat::getdientich(){
	return dientich;
}
istream& operator>>(istream& in, Dat& dat){
    in.ignore();
    in>>dat.a;
    int luachon;
    do{
    	cout << "\n\t 1. Dat loai A";
		cout << "\n\t 2. Dat loai B";
		cout << "\n\t 3. Dat loai C";
		cout<<"Chon: "; cin>>luachon;
		if(luachon==1)	dat.loai="A";
		if(luachon==2)	dat.loai="B";
		if(luachon==3)	dat.loai="C";
	}while(luachon<1||luachon>3);
    cout<<"Nhap dien tich: ";in>>dat.dientich;
    return in;
}
ostream& operator<<(ostream& out,const Dat& dat){
    out<<dat.a;
    out<<"Loai dat"<<dat.loai<<endl;
    out<<"Dien tich la: "<<dat.dientich<<endl;
    out<<"----------------------"<<endl;
    return out;
}
