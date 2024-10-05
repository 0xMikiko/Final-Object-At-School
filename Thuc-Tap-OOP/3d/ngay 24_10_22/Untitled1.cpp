#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class DaThuc{ 
  	friend ostream& operator<<(ostream&,DaThuc &);
   	friend istream& operator>>(istream&,DaThuc &);
	private:
   		int n;
    	int *Bac;
	public:
    	DaThuc();
    	DaThuc(int);
    	~DaThuc();
    	DaThuc operator+(DaThuc &);
    	DaThuc operator-(DaThuc &);
    	DaThuc operator*(DaThuc &);
};
DaThuc::DaThuc(){
	n=0;
	Bac=NULL;
}
DaThuc::DaThuc(int n){
	this->n=n;
	Bac=new int [n];
}
DaThuc::~DaThuc(){
	this->n=0;
	delete Bac;
}
istream &operator>>(istream &in, DaThuc &d){
    cout<<"Bac da thuc thu nhat la "; cin>>d.n;
    d.Bac = new int[d.n+1];
    cout<<"\nNhap cac he so cua da thuc: "<<endl;
    for(int i=0;i<=d.n;i++){
        cout<<"a["<<i<<"]= "; in>>d.Bac[i];
    }
    return in;
}
ostream &operator<<(ostream &out, DaThuc &d){
    for(int i=d.n;i>=1;i--){
        cout<<d.Bac[i]<<"x^"<<i<<"+"; 
    }
    cout <<d.Bac[0];
    return out;
}
DaThuc DaThuc::operator+(DaThuc &d)
{
    int max = (n>d.n)?n:d.n;
    int min = (n<d.n)?n:d.n;
    DaThuc sum(max);
    for(int i=max;i>min;i--){
    	if(n==max)
			sum.Bac[i]=Bac[i];
		else
			sum.Bac[i]=d.Bac[i];
	} 
    for(int i=0;i<=min;i++) sum.Bac[i]=Bac[i]+d.Bac[i];
    return sum;
}
DaThuc DaThuc::operator-(DaThuc &d)
{
    int max = (n>d.n)?n:d.n;
    int min = (n<d.n)?n:d.n;
    DaThuc sub(max);
    for(int i=0;i<=min;i++) sub.Bac[i]=Bac[i]-d.Bac[i];
    for(int i=max;i>min;i--){
    	if(n==max)
			sub.Bac[i]=Bac[i];
		else
			sub.Bac[i]=d.Bac[i];
	}
    return sub;
}
DaThuc DaThuc::operator*(DaThuc &d){
	int max=d.n+n;
    DaThuc mul(max);
	for(int i=0;i<=max;i++){
		mul.Bac[i]=0;
        for(int j=0;j<=n;j++)
        	if(i>=j && i-j<=d.n) mul.Bac[i]+=Bac[j]*d.Bac[i-j];
    }		
    return mul;
}
int main(){
    DaThuc a,b;
    cin>>a;
    cin>>b;
    cout<<"DaThuc thu 1: "<<a<<endl;
    cout<<"DaThuc thu 2: "<<b<<endl;
    DaThuc sum = a+b;
    cout<<"Tong 2 da thuc: "<<sum<<endl;
    DaThuc sub = a-b;
    cout<<"Hieu 2 da thuc: "<<sub<<endl;
    DaThuc mul = a*b;
    cout<<"Tich 2 da thuc: "<<mul<<endl;	 
    getch();
}
