#pragma once
#include"DocGiaTreEm.h"
#include"DocGiaNguoiLon.h"
#include<vector>

class CThuVien
{
private:
	vector<CDocGiaTreEm> ds_docgiatreem; // m?ng 1 chi?u(danh s�ch) ch?a c�c d?c gi? tr? em
	vector<CDocGiaNguoiLon> ds_docgianguoilon; // m?ng 1 chi?u(danh s�ch) ch?a c�c d?c gi? ngu?i l?n
public:

	void Input();
	void Output();
	int Tinh_Tong_Tien_Lam_The();

	CThuVien();
	~CThuVien();
};

// phuong th?c nh?p th�ng tin c�c lo?i d?c gi?
void CThuVien::Input()
{
	int luachon;
	while(true)
	{
		system("cls"); // x�a h?t c�c th? c� trong m�n h�nh console tru?c c�i l?nh n�y
		cout << "\n\n\t\t ============ THU VIEN X ============";
		cout << "\n\t 1. Doc gia tre em";
		cout << "\n\t 2. Doc gia nguoi lon";
		cout << "\n\t 0. Thoat";
		cout << "\n\n\t\t ============     END    ============";

		cout << "\nNhap lua chon: ";
		cin >> luachon;

		if (luachon == 1)
		{
			CDocGiaTreEm x; // khai b�o d?i tu?ng d?c gi? tr? em - d? nh?p th�ng tin
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x.Input();
			ds_docgiatreem.push_back(x); // th�m d?i tu?ng d?c gi? tr? em x v�o m?ng vector d?c gi? tr? em

		}
		else if (luachon == 2)
		{
			CDocGiaNguoiLon x; // khai b�o d?i tu?ng d?c gi? ngu?i l?n - d? nh?p th�ng tin
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x.Input();
			ds_docgianguoilon.push_back(x); // th�m d?i tu?ng d?c gi? ngu?i l?n x v�o m?ng vector d?c gi? ngu?i l?n
		}
		else if (luachon == 0)
		{
			break;
		}
		else
		{
			cout << "\nLua chon khong hop le. Xin kiem tra lai";
			system("pause");
		}
	}
}

// phuong th?c xu?t th�ng tin sinh vi�n
void CThuVien::Output()
{
	cout << "\n\n\t\t ===== DANH SACH DOC GIA TRE EM =====\n";
	// xu?t danh s�ch th�ng tin d?c gi? tr? em
	for (int i = 0; i < ds_docgiatreem.size(); i++)
	{
		cout << "\n\n\t\t THONG TIN DOC GIA TRE EM THU " << i + 1;
		ds_docgiatreem[i].Output(); // xu?t ra th�ng tin d?c gi? tr? em th? i
	}

	cout << "\n\n\t\t ===== DANH SACH DOC GIA NGUOI LON =====\n";
	// xu?t danh s�ch th�ng tin d?c gi? ngu?i l?n
	for (int i = 0; i < ds_docgianguoilon.size(); i++)
	{
		cout << "\n\n\t\t THONG TIN DOC GIA NGUOI LON THU " << i + 1;
		ds_docgianguoilon[i].Output(); // xu?t ra th�ng tin d?c gi? ngu?i l?n th? i
	}

}

// phuong th?c t�nh t?ng ti?n l�m th?
int CThuVien::Tinh_Tong_Tien_Lam_The()
{
	int sum = 0;
	// duy?t danh s�ch d?c gi? tr? em
	for (int i = 0; i < ds_docgiatreem.size(); i++)
	{
		sum = sum + ds_docgiatreem[i].Tinh_Tien_Lam_The();
	}

	// duy?t danh s�ch d?c gi? ngu?i l?n
	for (int i = 0; i < ds_docgianguoilon.size(); i++)
	{
		sum = sum + ds_docgianguoilon[i].Tinh_Tien_Lam_The();
	}
	return sum;
}


CThuVien::CThuVien()
{
}


CThuVien::~CThuVien()
{
}
