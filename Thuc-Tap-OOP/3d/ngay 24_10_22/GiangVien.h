class GiangVien:public NhanSu{
    friend ostream& operator<<(ostream&,const GiangVien&);
    friend istream& operator>>(istream&, GiangVien&);
	protected:
		string Nganh;
		string HocHam;
		string HocVi;
	public:
		void setNganh(string="x");
		void setHocHam(string="x");
		void setHocVi(string="x");
		string getNganh();
		string getHocHam();
		string getHocVi();
};

void GiangVien::setNganh(string nganh){
	this->Nganh=nganh;
}
void GiangVien::setHocHam(string HH){
	this->HocHam=HH;
}
void GiangVien::setHocVi(string HV){
	this->HocVi=HV;
}

string GiangVien::getNganh(){
	return Nganh;
}
string GiangVien::getHocHam(){
	return HocHam;
}
string GiangVien::getHocVi(){
	return HocVi;
}
ostream& operator<<(ostream& out,const GiangVien& G){
    out<<"-----------Giang Vien---------"<<endl;
    out<<"Ma so CB: "<<G.Id<<endl;
    out<<"Ho ten: "<<G.Name<<endl;
    out<<"Tuoi: "<<G.Age<<endl;
    out<<"Gioi tinh: "<<G.Gender<<endl;
    out<<"Dia chi: "<<G.Address<<endl; 
    out<<"Chuyen nganh: "<<G.Nganh<<endl;
    out<<"Hoc ham: "<<G.HocHam<<endl;
    out<<"Hoc vi: "<<G.HocVi<<endl; 
    out<<"-------------------------------"<<endl;
    return out;
}
istream& operator>>(istream& in, GiangVien& G){
    cout<<"-----------Giang Vien----------"<<endl;
    in.ignore();
    cout<<"Nhap ma so CB: ";getline(in,G.Id);
    cout<<"Nhap ho ten: ";getline(in,G.Name);
    cout<<"Nhap tuoi: ";in>>G.Age;
    cout<<"Nhap gioi tinh: ";getline(in,G.Gender);
    cout<<"Nhap dia chi: ";getline(in,G.Address);
    cout<<"Nhap Chuyen nganh: ";getline(in,G.Nganh);
    cout<<"Nhap Hoc ham: ";getline(in,G.HocHam);    
    cout<<"Nhap Hoc vi: ";getline(in,G.HocVi);  
    cout<<"-------------------------------"<<endl;
    return in;
}

