#include<iostream>
#include<string>
#include <fstream>
#include<windows.h>
#include<conio.h>

#include"Sach.h"
#include"DoAn.h"
#include"LuanVan.h"
using namespace std;

class QuanLyAnPham{
    protected:
        Sach *s = new Sach[50];
        DoAn *d = new DoAn[50];
        LuanVan *l =  new LuanVan[50];
        int count_sach=0, count_luan_van=0, count_do_an=0;
    public:
        void Run();
        void Insert();
        int GetData_sach();
        int GetData_do_an();
        int GetData_luan_van();
        void OutputAll();
        void Search();
        void Search_sach();
        void Search_do_an();
        void Search_luan_van();
};

// Input va Output----------------------------------------------------------------
void QuanLyAnPham::Insert(){
    bool stop=true;
    while(stop){
        system("cls");
        int select1;
        cout<<"1.Sach"<<endl;
        cout<<"2.Do An"<<endl;
        cout<<"3.Luan Van"<<endl;
        cout<<"4.Thoat"<<endl;
        cout<<"Chon: "; cin>>select1;
        switch (select1)
            {
            case 1:
            {   ofstream outSach; outSach.open("Sach.txt",fstream::app);
                cin>>s[count_sach];
                //outSach<<s[count_sach]<<endl;
                outSach<<s[count_sach].getMaAp()<<","<<s[count_sach].getTenAp()<<","<<s[count_sach].getTenTg()<<","<<s[count_sach].getTenNXB()<<","<<s[count_sach].getSoT()<<","<<endl;
                count_sach++;
                outSach.close();
                system("cls");
            }
                break;
            case 2:
            {
                ofstream outDoAn; outDoAn.open("DoAn.txt",fstream::app);
                cin>>d[count_do_an];
                //outDoAn<<d[count_do_an]<<endl;
                outDoAn<<d[count_do_an].getMaAp()<<","<<d[count_do_an].getTenAp()<<","<<d[count_do_an].getTenHV()<<","<<d[count_do_an].getCNganh()<<","<<d[count_do_an].getKhoa()<<","<<endl;
                count_do_an++;
                outDoAn.close();
                system("cls");
            }
                break;
            case 3:
            {
                ofstream outLuanVan; outLuanVan.open("LuanVan.txt",fstream::app);
                cin>>l[count_luan_van];
                //outLuanVan<<l[count_luan_van]<<endl;
                outLuanVan<<l[count_luan_van].getMaAp()<<","<<l[count_luan_van].getTenAp()<<","<<l[count_luan_van].getTenHV()<<","<<l[count_luan_van].getCNganh()<<","<<l[count_luan_van].getBac()<<","<<l[count_luan_van].getKhoa()<<","<<endl;
                count_luan_van++;
                outLuanVan.close();
                system("cls");
            }
                break;
            case 4:
                stop=false;
                break;
            default:
                cout<<"Try again";
                getch();
                system("cls");
                continue;
            }
    }
}

int QuanLyAnPham::GetData_sach(){
    // SACH
    ifstream inSach;inSach.open("Sach.txt");
    if(inSach.fail()){cout<<"Failed to open"<<endl;return 1;}
    else{
        count_sach=0;
        while(!inSach.eof()){
            string line;
            getline(inSach,line);
            size_t pos = 0;
            string token;
            string delimiter=",";
            string arr[5];
            int i=0;
            while ((pos = line.find(delimiter)) != string::npos) {
                token = line.substr(0, pos);
                arr[i]=token;
                line.erase(0, pos + delimiter.length());
                i++;
            }
            s[count_sach].setTenAp(arr[0]);
            s[count_sach].setMaAp(arr[1]);
            s[count_sach].setTenTg(arr[2]);
            s[count_sach].setTenNXB(arr[3]);
            stringstream ss;ss<<arr[4];
            int num;ss>>num;
            s[count_sach].setSoT(num);
            count_sach++;
        }
        count_sach-=1;
        inSach.close();
    }
}

int QuanLyAnPham::GetData_do_an(){
    // DO AN
    ifstream inDoAn;inDoAn.open("DoAn.txt");
    if(inDoAn.fail()){cout<<"Failed to open"<<endl;return 1;}
    else{
        count_do_an=0;
        while(!inDoAn.eof()){
            string line;
            getline(inDoAn,line);
            size_t pos = 0;
            string token;
            string delimiter=",";
            string arr[5];
            int i=0;
            while ((pos = line.find(delimiter)) != string::npos) {
                token = line.substr(0, pos);
                arr[i]=token;
                line.erase(0, pos +1);
                i++;
            }
            d[count_do_an].setMaAp(arr[0]);
            d[count_do_an].setTenAp(arr[1]);
            d[count_do_an].setTenHV(arr[2]);
            d[count_do_an].setCNganh(arr[3]);
            stringstream ss;ss<<arr[4];
            int num;ss>>num;
            d[count_do_an].setKhoa(num);
            count_do_an++;
        }
        count_do_an-=1;
        inDoAn.close();
    }
}

int QuanLyAnPham::GetData_luan_van(){
    // LUAN VAN
    ifstream inLuanVan;inLuanVan.open("LuanVan.txt");
    if(inLuanVan.fail()){cout<<"Failed to open"<<endl;return 1;}
    else{
        count_luan_van=0;
        while(!inLuanVan.eof()){
            string line;
            getline(inLuanVan,line);
            size_t pos = 0;
            string token;
            string delimiter=",";
            string arr[6];
            int i=0;
            while ((pos = line.find(delimiter)) != string::npos) {
                token = line.substr(0, pos);
                arr[i]=token;
                line.erase(0, pos + delimiter.length());
                i++;
            }
            l[count_luan_van].setMaAp(arr[0]);
            l[count_luan_van].setTenAp(arr[1]);
            l[count_luan_van].setTenHV(arr[2]);
            l[count_luan_van].setCNganh(arr[3]);
            l[count_luan_van].setBac(arr[4]);
            stringstream ss;ss<<arr[5];
            int num;ss>>num;
            l[count_luan_van].setKhoa(num);
            count_luan_van++;
        }
        count_luan_van-=1;
        inLuanVan.close();
    }
}

void QuanLyAnPham::OutputAll(){
    system("cls");
    GetData_sach();
    cout<<"----------------------SACH----------------------\n";
    for(int i=0;i<count_sach;i++){
        cout<<s[i];
    }
    cout<<"\n\n";
    GetData_do_an();
    cout<<"----------------------DOAN----------------------\n";
    for(int i=0;i<count_do_an;i++){
        cout<<d[i];
    }
    cout<<"\n\n";
    GetData_luan_van();
    cout<<"---------------------LUANVAN--------------------\n";
    for(int i=0;i<count_luan_van;i++){
        cout<<l[i];
    }
    getch();
}

// Thao tac voi tim kiem----------------------------------------------------------
void QuanLyAnPham::Search(){
    system("cls");
    cout<<"1.Sach"<<endl;
    cout<<"2.Do An"<<endl;
    cout<<"3.Luan Van"<<endl;
    int press;
    cout<<"Chon loai can tim: ";cin>>press;
    switch(press){
        case 1:
            Search_sach();
            break;
        case 2:
            Search_do_an();
            break;
        case 3:
            Search_luan_van();
            break;
        default:
            cout<<"Try again";
            getch();
            break;
    }
}

void QuanLyAnPham::Search_sach(){
    GetData_sach();
    bool stop = true;
    while(stop){
        system("cls");
        cout<<"1.Tim theo tac gia"<<endl;
        cout<<"2.Tim theo NXB"<<endl;
        cout<<"3.Thoat"<<endl;
        int press1;
        cout<<"Chon: ";cin>>press1;
        switch (press1)
        {
        case 1:
            {
            string check_tg;
            cout<<"Nhap ten tac gia can tim: ";
            cin.ignore();
            getline(cin,check_tg);
            
            for(int i=0;i<count_sach;i++){
                if(check_tg==s[i].getTenTg()){
                    cout<<s[i];
                }
            }
            getch();
            }
            break;
        case 2:
            {
            string check_NXB;
            cout<<"Nhap ten NXB can tim: ";
            cin.ignore();
            getline(cin,check_NXB);
            for(int i=0;i<count_sach;i++){
                if(check_NXB==s[i].getTenNXB()){
                    cout<<s[i];
                }
            }
            getch();
            }
            break;
        case 3:
            {
                stop=false;
                break;
            }
        default:
            continue;
        }
    }
}

void QuanLyAnPham::Search_do_an(){
    GetData_do_an();
    bool stop=true;
    while(stop){
        system("cls");
        cout<<"1.Tim theo ten hoc vien"<<endl;
        cout<<"2.Tim theo chuyen nganh"<<endl;
        cout<<"3.Thoat"<<endl;
        int press2;
        cout<<"Chon: ";cin>>press2;
        switch (press2)
        {
        case 1:
            {
                string check_hv;
                cout<<"Nhap ten hoc vien can tim: ";
                cin.ignore();
                getline(cin,check_hv);
                for(int i=0;i<count_do_an;i++){
                    if(check_hv==d[i].getTenHV()){
                        cout<<d[i];
                    }
                }
                getch();
            }
            break;
        case 2:
            {
                string check_nganh;
                cout<<"Nhap ten nganh can tim: ";
                cin.ignore();
                getline(cin,check_nganh);
                for(int i=0;i<count_do_an;i++){
                    if(check_nganh==d[i].getCNganh()){
                        cout<<d[i];
                    }
                }
                getch();
            }
            break;
        case 3:
            {
                stop=false;
                break;
            }
        default:
            continue;
        }       
    }
}

void QuanLyAnPham::Search_luan_van(){
    GetData_luan_van();
    bool stop=true;
    while(stop){
        system("cls");
        cout<<"1.Tim theo ten hoc vien"<<endl;
        cout<<"2.Tim theo chuyen nganh"<<endl;
        cout<<"3.Tim theo khoa"<<endl;
        cout<<"4.Thoat"<<endl;
        int press3;
        cout<<"Chon: ";cin>>press3;
        switch (press3)
        {
        case 1:
            {
                string check_hv;
                cout<<"Nhap ten hoc vien can tim: ";
                cin.ignore();
                getline(cin,check_hv);
                for(int i=0;i<count_luan_van;i++){
                    if(check_hv==l[i].getTenHV())
                    {
                        cout<<l[i];
                    }
                }
                getch();
            }
            break;
        case 2:
            {
                string check_nganh;
                cout<<"Nhap ten nganh can tim: ";
                cin.ignore();
                getline(cin,check_nganh);
                for(int i=0;i<count_luan_van;i++){
                    if(check_nganh==l[i].getCNganh()){
                        cout<<l[i];
                    }
                }
                getch();
            }
            break;
        case 3:
            {
                int khoa;
                cout<<"Nhap khoa can tim: ";
                cin>>khoa;
                for(int i=0;i<count_luan_van;i++){
                    if(khoa==l[i].getKhoa()){
                        cout<<l[i];
                    }
                }
                getch();
            }
            break;
        case 4:
            {
                stop =false;
                break;
            }
        default:
            continue;
        }       
    }
}

void QuanLyAnPham::Run(){
    bool stop = true;
    while(true){
        system("cls");
        int select;
        cout<<"1.Them an pham "<<endl;
        cout<<"2.Hien thi toan bo "<<endl;
        cout<<"3.Tim kiem "<<endl;
        cout<<"4.Thoat chuong trinh"<<endl;
        cout<<"Chon de thuc hien chuong trinh: "; cin>>select;
        switch (select)
        {
        case 1:
            {
                Insert();
            }
            break;
        case 2:
            {
                OutputAll();
            }
            break;
        case 3:
            {
                Search();
            }
            break;
        case 4:
            exit(0);
        default:
            continue;
        }
    }
}

int main(){
    QuanLyAnPham A;
    A.Run();
    // QuanLyAnPham test;
    // test.GetData();
    return 0;
}
