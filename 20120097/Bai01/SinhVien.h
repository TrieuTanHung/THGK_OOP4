#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
protected:
	string hoTen;
	int tuoi;
	string MSSV;
	int soMonMoiDangKy;
	int soMonDangKyThiLai;
	int soMonDangKyHocLai;
public:
	SinhVien();
	~SinhVien();
	void Nhap();
	void Xuat();
	// int tinhtien();
	string get_Ten()
	{
		return hoTen;
	}
	void set_Ten(string hoTen)
	{
		this->hoTen = hoTen;
	}
	int get_Tuoi()
	{
		return tuoi;
	}
	void set_Tuoi(int tuoi)
	{
		this->tuoi = tuoi;
	}
	string get_MSSV()
	{
		return MSSV;
	}
	void set_MSSV(string MSSV)
	{
		this->MSSV = MSSV;
	}
	int get_soMonMoiDangKy()
	{
		return soMonMoiDangKy;
	}
	void set_soMonMoiDangKy(int soMonMoiDangKy)
	{
		this->soMonMoiDangKy = soMonMoiDangKy;
	}
	int get_soMonDangKyThiLai()
	{
		return soMonDangKyThiLai;
	}
	void set_soMonDangKyThiLai(int soMonDangKyThiLai)
	{
		this->soMonDangKyThiLai = soMonDangKyThiLai;
	}
	int get_soMonDangKyHocLai()
	{
		return soMonDangKyHocLai;
	}
	void set_soMonDangKyHocLai(int soMonDangKyHocLai)
	{
		this->soMonDangKyHocLai = soMonDangKyHocLai;
	}


	virtual int tinhtien() 
	{return 0;}
};



