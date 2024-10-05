#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<windows.h>
#include<conio.h>
#include"giaodich.h"
#include"dat.h"
#include"nha.h"
#include"vang.h"
#include"tien.h"
using namespace std;

class QuanLyGiaoDich{
    protected:
        Dat gdDat[100];
        Nha gdNha[100];
        Vang gdVang[100];
        Tien gdTien[100];
        int count_dat=0;
        int count_nha=0;
        int count_vang=0;
        int count_tien=0;
    public:
        void Run();
        void OutAll();
        int GetData();
        void Insert();
        void AvgTrigia();
};

void QuanLyGiaoDich::Run(){
    bool stop= true;
    while(stop){
        system("cls");
        cout<<"                             Chuong trinh quan ly giao dich                              "<<endl;
        cout<<"1.Them giao dich"<<endl;
        cout<<"2.Hien thi toan bo giao dich"<<endl;
        cout<<"3.Tinh trung binh tri gia cua tien"<<endl;
        cout<<"4.Thoat"<<endl;
        int press;
        cout<<"Chon: ";cin>>press;
        switch (press)
        {
        case 1:
            Insert();
            break;
        case 2:
            OutAll();
            break;
        case 3:
            AvgTrigia();
            break;
        case 4:
            exit(0);
            break;
        default:
            system("cls");
            continue;
        }
    }
}

void QuanLyGiaoDich::Insert(){
    bool stop = true;
    while (stop)
    {
        system("cls");
        cout<<"1.Dat"<<endl;
        cout<<"2.Nha"<<endl;
        cout<<"3.Vang"<<endl;
        cout<<"4.Tien"<<endl;
        cout<<"5.Thoat"<<endl;
        int press1;
        cout<<"Chon: ";cin>>press1;
        switch (press1)
        {
        case 1:
        {
            ofstream outDat; outDat.open("dat.txt",fstream::app);
            cin>>gdDat[count_dat];
            outDat<<gdDat[count_dat].getMa()<<","<<gdDat[count_dat].getDate().day<<","<<gdDat[count_dat].getDate().month<<","<<gdDat[count_dat].getDate().year<<","<<gdDat[count_dat].getGia()<<","<<gdDat[count_dat].getLoai()<<","<<gdDat[count_dat].getS()<<","<<endl;
            outDat.close();
            count_dat++;
            system("cls");
        }
            break;
        case 2:
        {
            ofstream outNha; outNha.open("nha.txt",fstream::app);
            cin>>gdNha[count_nha];
            outNha<<gdNha[count_nha].getMa()<<","<<gdNha[count_nha].getDate().day<<","<<gdNha[count_nha].getDate().month<<","<<gdNha[count_nha].getDate().year<<","<<gdNha[count_nha].getGia()<<","<<gdNha[count_nha].getLoai()<<","<<gdNha[count_nha].getDC()<<","<<gdNha[count_nha].getS()<<","<<endl;
            outNha.close();
            count_nha++;
            system("cls");
        }
            break;
        case 3:
        {
            ofstream outVang; outVang.open("vang.txt",fstream::app);
            cin>>gdVang[count_vang];
            outVang<<gdVang[count_vang].getMa()<<","<<gdVang[count_vang].getDate().day<<","<<gdVang[count_vang].getDate().month<<","<<gdVang[count_vang].getDate().year<<","<<gdVang[count_vang].getGia()<<","<<gdVang[count_vang].getSoLuong()<<","<<gdVang[count_vang].getLoai()<<","<<gdVang[count_vang].getTrigia()<<","<<endl;
            outVang.close();
            count_vang++;
            system("cls");
        }
            break;
        case 4:
        {
            ofstream outTien; outTien.open("tien.txt",fstream::app);
            cin>>gdTien[count_tien];
            outTien<<gdTien[count_tien].getMa()<<","<<gdTien[count_tien].getDate().day<<","<<gdTien[count_tien].getDate().month<<","<<gdTien[count_tien].getDate().year<<","<<gdTien[count_tien].getGia()<<","<<gdTien[count_tien].getSoLuong()<<","<<gdTien[count_tien].getLoai()<<","<<gdTien[count_tien].getTyGia()<<","<<gdTien[count_tien].getTriGia()<<","<<endl;
            outTien.close();
            count_tien++;
            system("cls");
        }
            break;
        case 5:
            stop= false;
            break;
        default:
            continue;
        }
    }
}

void QuanLyGiaoDich::OutAll(){
    system("cls");
    cout<<"---------------------DAT--------------------------"<<endl;
    for(int i=0;i<count_dat;i++){
        cout<<gdDat[i];
    }
    cout<<"---------------------NHA--------------------------"<<endl;
    for(int i=0;i<count_nha;i++){
        cout<<gdNha[i];
    }
    cout<<"---------------------VANG-------------------------"<<endl;
    for(int i=0;i<count_vang;i++){
        cout<<gdVang[i];
    }
    cout<<"---------------------TIEN-------------------------"<<endl;
    for(int i=0;i<count_tien;i++){
        cout<<gdTien[i];
    }
    getch();
}

void QuanLyGiaoDich::AvgTrigia(){
    float avg=0;
    for(int i=0;i<count_tien;i++){
        avg+=gdTien[i].getTriGia();
    }
    cout<<"Tri gia trung binh la: "<<avg/count_tien;
    getch();
}
int main(){
    //cout<<"Hello World";
    QuanLyGiaoDich NguyenAnhNam;
    NguyenAnhNam.Run();
    return 0;
}