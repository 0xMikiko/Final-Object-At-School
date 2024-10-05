#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;
class Xe{
	friend ostream& operator<<(ostream&, const Xe& );
    friend istream& operator>>(istream&, Xe& );
	protected:
        string maso;
        string tentaixe;
        string soxe;
    public:
        Xe();
        ~Xe();
        Xe(string,string,string);
        void setmaso(string);
        string getmaso();
        void settentaixe(string);
        string gettentaixe();
        void setsoxe(string);
        string getsoxe();
     
};
ostream& operator<<(ostream&out, const Xe& A){
    out << "Ten tai xe: " << A.maso << endl;
    out << "Ma so : " << A.tentaixe << endl;
    out << "So xe: " << A.soxe << endl;
	
    return out;
}
istream& operator>>(istream&is, Xe& A){
	fflush(stdin);
    cout << "Ten tai xe: " ; getline(is, A.tentaixe);
    fflush(stdin);
    cout << "Ma so: " ; getline(is, A.maso);
    fflush(stdin);
    cout << "So xe: " ; getline(is, A.soxe);
    return is;
}



Xe::Xe(){
    maso="NULL";
    tentaixe="NULL";
    soxe="NULL";
}
Xe::Xe(string a,string b,string c){
	maso=a;
	tentaixe=b;
	soxe=c;
}
Xe::~Xe(){
	
}
void Xe::setmaso(string ms){
	maso=ms;
}
void Xe::settentaixe(string ms){
	tentaixe=ms;
}
void Xe::setsoxe(string ms){
	soxe=ms;
}

string Xe::getmaso(){
	return maso;
}
string Xe::gettentaixe(){
	return tentaixe;
}

string Xe::getsoxe(){
	return soxe;
}

