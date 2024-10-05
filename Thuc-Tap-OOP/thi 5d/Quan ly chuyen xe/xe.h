#ifndef __xe_H__
#define __xe_H__


#include<iostream>
#include<string>
using namespace std;
class Xe{
    protected:
        string maso;
        string tentx;
        string soxe;
        long long doanhthu;
    public:
        Xe();
        Xe(string,string,string);
        string getMS();
        string getTX();
        string getSX();
        long long getDT();
        void setMS(string);
        void setTX(string);
        void setSX(string);
        void setDT(long long);
};

Xe::Xe(){
    maso="X";
    tentx="X";
    soxe="X";
    doanhthu=0;
}
Xe::Xe(string ms, string ttx, string sx){
    maso=ms;
    tentx=ttx;
    soxe=sx;
    doanhthu=0;
}

string Xe::getMS(){return maso;}
string Xe::getTX(){return tentx;}
string Xe::getSX(){return soxe;}
long long Xe::getDT(){return doanhthu;}

void Xe::setMS(string ms){maso=ms;}
void Xe::setTX(string tx){tentx=tx;}
void Xe::setSX(string sx){soxe=sx;}
void Xe::setDT(long long dt){doanhthu=dt;}

#endif