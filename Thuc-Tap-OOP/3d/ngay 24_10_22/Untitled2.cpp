#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class AnPham{ 
	protected:
		string id;
		string name;
	public:
		AnPham(string,string);
		string getid();
		void setid(string);
		string getname();
		void setname(string);
		void display();
};
AnPham::AnPham(string id,string name){
	this->id=id;
	this->name=name;
}
void AnPham::setid(string I){
	id=I;
}
string AnPham::getid(){
	return id;
}
void AnPham::setname(string N){
	name=N;
}
string AnPham::getname(){
	return name;
}
void AnPham::display(){
	printf("  MA SACH           TEN SACH          \n");
	printf(" %-15s %-20s",id.c_str(),name.c_str());
}



class Sach:public AnPham{
	private:
		string author;
		int numpage;
		string NXB;
	public:
		Sach(string,string,string,int,string);
		string getauthor();
		void setauthor(string);
		string getNXB();
		void setNXB(string);
		int getnumpage();
		void setnumpage(int);
		void display();
};
Sach::Sach(string I,string N,string A,int num,string nxb ):AnPham(I,N){
	author=A;
	numpage=num;
	NXB=nxb;
}
void Sach::setauthor(string I){
	author=I;
}
string Sach::getauthor(){
	return id;
}
void Sach::setNXB(string N){
	NXB=N;
}
string Sach::getNXB(){
	return NXB;
}
void Sach::setnumpage(int N){
	numpage=N;
}
int Sach::getnumpage(){
	return numpage;
}

class DoAN:public AnPham{
	protected:
		string tenHV;
		string Khoa;
		string Nganh;
	public:
		DoAN(string,string,string,string,string);
};
DoAN::DoAN(string I,string N,string tenhv,string khoa,string nganh):AnPham(I,N){
	tenHV=tenhv;
	Khoa=khoa;
	Nganh=nganh;
}

class LuanVan:public DoAN{
	private:
		string BacDaoTao;
	public:
		LuanVan(string,string,string,string,string,string);		
};
LuanVan::LuanVan(string I,string N,string tenhv,string khoa,string nganh,string bac):DoAN(I,N,tenhv,khoa,nganh){
	BacDaoTao=bac;
}

int main(){
	int i;
	for(int i=0;i<256;i++){

	};
	cout << i;
}

