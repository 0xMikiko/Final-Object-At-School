//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin
//	FileID:	Fraction( Phan so)


#include <iostream>
using namespace std;

int GCD(int a,int b){
	if(b == 0)
		return a;
	else
		return GCD(b, a%b);
}

class PhanSo{
private:
		int tu, mau;
public:
	PhanSo()
	{
		tu = 0; mau = 1;
	}
	
	PhanSo(int tu, int mau)
	{
		this->tu = tu;
		this->mau = mau;
	}
	void get()
	{
		cout << "Nhap tu so:"; cin >> this->tu;
		cout << "Nhap mau so:"; cin >> this->mau;
	}
	void set()
	{
		cout << this->tu << "/" << this->mau << "\n";
	}

	
	PhanSo operator*(PhanSo obj)
	{
		PhanSo result;
		result.tu = this->tu*obj.tu;
		result.mau = obj.mau*this->mau;
		return result;
	}

	PhanSo operator+(PhanSo obj)
	{
		PhanSo result;
		result.tu = this->tu*obj.mau + obj.tu*this->mau;
		result.mau = obj.mau * this->mau;
		return result;
	}
	bool KiemTra(){
        if(this->tu>this->mau)
			return true;
		else
			return false;

        }

	friend istream &operator>>(istream &in, PhanSo &a)
	{
		cout << "Nhap tu so: ";
		in>> a.tu;
		cout << "Nhap mau so: ";
		in >> a.mau;
		return in;
	}
	
	friend ostream &operator<<(ostream &out, PhanSo a)
	{
		int gcd_ = GCD(a.tu, a.mau);
		a.tu /= gcd_;
		a.mau /= gcd_;
		if(a.mau==1)
			out << a.tu;
		else 
			out << a.tu << "/" << a.mau;
		return out;
	}
	bool check(){
		if(this->tu==0 || this->mau==0)
			return false;
		return true;
	}
};

int main()
{
	PhanSo a,b,c,d;
	cin >> a >>b;
	cout << "So thu nhat la: " <<a<< endl;
	cout << "So thu hai la: " <<b <<endl;
	cout << a+b << endl;
	cout << a*b << endl;
	if(b.KiemTra())
		cout << "b>1" << endl;
	else
		cout << "b<1" << endl;
	return 0;
	

}


