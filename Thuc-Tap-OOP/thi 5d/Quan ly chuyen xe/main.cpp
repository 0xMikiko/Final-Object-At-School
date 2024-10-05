#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<windows.h>
#include<conio.h>
#include"xe.h"
#include"xnt.h"
#include"xngt.h"
using namespace std;


// Coi 1km het 2000
// Coi 1 ngay di het 500000
class QuanLyChuyenXe{
    private:
        XeNoiTinh nt[100];
        XeNgoaiTinh ngt[100];
        int count_nt=0, count_ngt=0;
    public:
        void Run();
        void Insert();
        int InsertNT();
        int InsertNGT();
        void OutAll();
        int GetData();
        void TongDoanhThu();
};

int QuanLyChuyenXe::GetData(){
    ifstream inNT, inNGT;
    inNT.open("xenoitinh.txt");inNGT.open("xengoaitinh.txt");
    if(inNT.fail()){cout<<"Fail to open";getch();return 1;}
    else{
        count_nt=0;
        while(!inNT.eof()){
            string line;
            getline(inNT,line);
            size_t pos = 0;
            string token;
            string delimiter="|";
            string arr[5];
            int i=0;
            while ((pos = line.find(delimiter)) != string::npos) {
                token = line.substr(0, pos);
                arr[i]=token;
                line.erase(0, pos + delimiter.length());
                i++;
            }
            nt[count_nt].setMS(arr[0]);
            nt[count_nt].setTX(arr[1]);
            nt[count_nt].setSX(arr[2]);
            stringstream stf;stf<<arr[3];
            int st;stf>>st;nt[count_nt].setST(st);
            stringstream kmf;kmf<<arr[4];
            int km;kmf>>km;nt[count_nt].setKM(km);nt[count_nt].setDT(km*2);
            count_nt++;
        }
        count_nt-=1;
        inNT.close();
    }
    if(inNGT.fail()){cout<<"Fail to open";getch();return 1;}
    else{
        count_ngt=0;
        while(!inNGT.eof()){
            string line;
            getline(inNGT,line);
            size_t pos = 0;
            string token;
            string delimiter="|";
            string arr[5];
            int i=0;
            while ((pos = line.find(delimiter)) != string::npos) {
                token = line.substr(0, pos);
                arr[i]=token;
                line.erase(0, pos + delimiter.length());
                i++;
            }
            ngt[count_ngt].setMS(arr[0]);
            ngt[count_ngt].setTX(arr[1]);
            ngt[count_ngt].setSX(arr[2]);
            ngt[count_ngt].setND(arr[3]);
            stringstream snf;snf<<arr[4];
            int sn;snf>>sn;ngt[count_ngt].setSN(sn);ngt[count_ngt].setDT(sn*5);
            count_ngt++;
        }
        count_ngt-=1;
        inNGT.close();
    }
    return 0;
}

void QuanLyChuyenXe::TongDoanhThu(){
    system("cls");
    long long sum=0;
    for(int i=0;i<count_nt;i++){sum+=nt[i].getDT()*1000;}
    for(int i=0;i<count_ngt;i++){sum+=ngt[i].getDT()*100000;}
    cout<<"Tong doanh thu la: "<<sum<<endl;
    getch();
}

void QuanLyChuyenXe::OutAll(){
    system("cls");
    GetData();
    cout<<"                 XE NOI TINH             "<<endl;
    for(int i=0;i<count_nt;i++){cout<<nt[i];}
    cout<<"                 XE NGOAI TINH           "<<endl;
    for(int i=0;i<count_ngt;i++){cout<<ngt[i];}
    getch();
}

int QuanLyChuyenXe::InsertNT(){
    ofstream outNT;outNT.open("xenoitinh.txt",fstream::app);
    if(outNT.fail()){cout<<"Fail to open";getch();return 1;}
    else{
        cin>>nt[count_nt];
        outNT<<nt[count_nt].getMS()<<"|"<<nt[count_nt].getTX()<<"|"<<nt[count_nt].getSX()<<"|"<<nt[count_nt].getST()<<"|"<<nt[count_nt].getKM()<<"|"<<endl;
        count_nt++;
        outNT.close();
    }
    return 0;
}

int QuanLyChuyenXe::InsertNGT(){
    ofstream outNGT;outNGT.open("xengoaitinh.txt",fstream::app);
    if(outNGT.fail()){cout<<"Fail to open";getch();return 1;}
    else{
        cin>>ngt[count_ngt];
        outNGT<<ngt[count_ngt].getMS()<<"|"<<ngt[count_ngt].getTX()<<"|"<<ngt[count_ngt].getSX()<<"|"<<ngt[count_ngt].getND()<<"|"<<ngt[count_ngt].getSN()<<"|"<<endl;
        count_ngt++;
        outNGT.close();
    }
    return 0;
}

void QuanLyChuyenXe::Insert(){
    bool stop=true;
    while (stop)
    {
        system("cls");
    
        cout<<"1. Them xe noi tinh"<<endl;
        cout<<"2. Them xe ngoai tinh"<<endl;
        cout<<"3. Thoat"<<endl;
        cout<<"Chon de thuc hien: ";int press1; cin>>press1;
        switch (press1)
        {
        case 1:
            system("cls");
            InsertNT();
            break;
        case 2:
            system("cls");
            InsertNGT();
            break;
        case 3:
            stop=false;
            break;
        default:
            system("cls");
            continue;
        }
    }
}

void QuanLyChuyenXe::Run(){
    GetData();
    while (true)
    {
        system("cls");
        cout<<"                    Quan Ly Chuyen Xe"<<endl;
        cout<<"1. Them du lieu"<<endl;
        cout<<"2. In toan bo chuyen xe"<<endl;
        cout<<"3. Tinh tong doanh thu"<<endl;
        cout<<"4. Thoat"<<endl;
        cout<<"Chon de thuc hien: ";int press; cin>>press;
        switch (press)
        {
        case 1:
            Insert();
            break;
        case 2:
            OutAll();
            break;
        case 3:
            TongDoanhThu();
            break;
        case 4:
            exit(0);
            break;
        default:
            continue;
        }
    }
}

int main(){
    QuanLyChuyenXe NguyenAnhNam;
    NguyenAnhNam.Run();
    return 0;
}