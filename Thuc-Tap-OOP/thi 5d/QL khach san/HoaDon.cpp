#include"ThuePhong.cpp"

class HoaDon :public ThuePhong{
	private:
		string style;
		int MaHD;
		double Tinhtien;
	public:
		HoaDon(){}
		HoaDon(const ThuePhong TP){
			ThuePhong::setThis(TP);
			MaHD =ThuePhong::getsophong() * 10000 + ThuePhong::getsongay() * 100 +rand() % 100;
			Tinhtien = ThuePhong::getsongay() * ThuePhong::getgia();
		}
	void setstyle(string st) { style = st; }
	//void thanhtoan() { thanhtoan = true; }
	void inhoadon()
	{
		cout << "____Hoa don thanh toan_____" << endl;
		cout << "Ma Hoa Don: " << MaHD << endl;
		cout << "Ngay: " << ThuePhong::getngay().day<<"/"<<ThuePhong::getngay().month<<"/"<<ThuePhong::getngay().year << endl;
//		cout << "Khach Hang: " << ThuePhong::getname() <<"Nam sinh: " <<ThuePhong::getage() << endl;
		cout << "So ngay thue: " << ThuePhong::getsongay() << endl;
		cout << "Gia phong /ngay: $"<<ThuePhong::getgia()<<endl;
		cout << "___________________________" << endl;
		cout << ThuePhong::getsongay() << "X" << ThuePhong::getgia();
		cout << "              $" << Tinhtien<<endl;
		cout << "_______DA THANH TOAN_______" << endl<<endl;
		cout << "!!!!Cam on quy khach da su dung dich vu cua khac san Overlook!!!!"<<endl<<endl;
	}
};
