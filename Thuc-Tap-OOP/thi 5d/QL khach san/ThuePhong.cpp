#pragma once
#include"KhachThue.cpp"
#include <vector>
#include <conio.h>
class Date{
public:
	int day;
    int month;
    int year;

};

class ThuePhong{
	friend ostream& operator<<(ostream& , const ThuePhong& );
	friend istream& operator>>(istream& , ThuePhong& );
	protected:
		int songay;
		int sophong;
		int gia;
		string loaiphong;
		Date ngay;
		KhachThue a;
	public:
		ThuePhong() {}
		~ThuePhong() {}
		void setsongay(int sn){	songay=sn;	}
		void setsophong(int sn){	sophong=sn;	}
		void setgia(int sn){	gia=sn;	}
		void setloaiphong(string a){loaiphong=a;}
		void setngay(Date d){ngay=d;		}
		int getsongay(){return songay;	}
		int getsophong(){return sophong;	}
		int getgia(){return gia;	}
		Date getngay(){return ngay;		}
		string getloaiphong(){return loaiphong;	}
		ThuePhong& getthis() { return *this; }
		void setThis(const ThuePhong tp){
			loaiphong = tp.loaiphong;
			songay = tp.songay;
			sophong = tp.sophong;
			gia = tp.gia;
			ngay = tp.ngay;
			a = tp.a;
		}
};


ostream& operator<<(ostream& out, const ThuePhong& TP){
		out << "____THONG TIN THUE PHONG____" << endl;
		out << TP.a;
		out << "Loai Phong : " << TP.loaiphong << endl;
		out << "So phong: " << TP.sophong << endl;
		out << "Ngay Thue: " << TP.ngay.day<<"/"<<TP.ngay.month<<"/"<<TP.ngay.year  << endl;
		out << "So ngay Thue: " << TP.songay;
		//out << "____________________________" << endl;
		return out;
}
istream& operator>>(istream& in, ThuePhong& TP){
	int luachon;
	do{
		system("cls");
		cout <<"\n-------MENU--------";
		cout <<"\n1.Nhap thong tin khach thue";
		cout <<"\n2.Thoat";
		cout <<"\n-------------------";
		do{
			cout << "\nNhap vao lua chon: ";
			in >>luachon;
			if(luachon!=1&&luachon!=2){
				cout <<"\nLua chon khong hop le.";
			}
		}while(luachon!=1&&luachon!=2);
		int key;
		if(luachon==1){
			in>>TP.a;
			do{
				cout << "Loai Phong (A,B hoac C): ";  
				in>>key;
				if(key==1){
					TP.loaiphong = 'A'; TP.gia = 300;
				}else if(key==2){
					TP.loaiphong = 'B'; TP.gia = 200;
				}else if(key==3){
					TP.loaiphong = 'C'; TP.gia = 100;
				}else{
					cout<"nhap sai. nhap lai";
				}
			}while(key<1||key>3);
			cout << "So Phong: "; in >> TP.sophong;
			cout<<"Nhap ngay thue: ";in>>TP.ngay.day;
	   		cout<<"Nhap thang thue: ";in>>TP.ngay.month;
	    	cout<<"Nhap nam thue: ";in>>TP.ngay.year;
			cout << "So ngay thue: "; in >> TP.songay;
			cout << "____________________________" << endl;
		}

	}while(luachon!=2);

		
	return in;
}
