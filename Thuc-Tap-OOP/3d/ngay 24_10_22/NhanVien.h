

class NhanVien:public NhanSu{
	friend ostream& operator<<(ostream&,const NhanVien&);
    friend istream& operator>>(istream&, NhanVien&);
	protected:
		int Bac;
	public:
		void setBac(int=0);
		int getBac();
};
void NhanVien::setBac(int a){
	this->Bac=a;
}
int NhanVien::getBac(){
	return Bac;
}
ostream& operator<<(ostream& out,const NhanVien& N){
    out<<"------------Nhan Vien--------"<<endl;
    out<<"Ma so CB: "<<N.Id<<endl;
    out<<"Ho ten: "<<N.Name<<endl;
    out<<"Tuoi: "<<N.Age<<endl;
    out<<"Gioi tinh: "<<N.Gender<<endl;
    out<<"Dia chi: "<<N.Address<<endl; 
	out<<"Bac: "<<N.Bac<<endl;
    out<<"-------------------------------"<<endl;
    return out;
}
istream& operator>>(istream& in, NhanVien& N){
    cout<<"-----------Nhan Vien--------"<<endl;
    in.ignore();
    cout<<"Nhap ma so CB: ";getline(in,N.Id);
    cout<<"Nhap ho ten: ";getline(in,N.Name);
    cout<<"Nhap tuoi: ";in>>N.Age;
    cout<<"Nhap gioi tinh: ";getline(in,N.Gender);
    cout<<"Nhap dia chi: ";getline(in,N.Address);
    cout<<"Nhap bac: ";in>>N.Bac;
    cout<<"-------------------------------"<<endl;
    return in;
}

