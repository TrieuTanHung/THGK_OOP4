#include "SinhVien.h"
#include "QuanLy.h"
int main()
{
	QuanLy quanly;
	quanly.nhap();
	cout << "====================";
	quanly.xuat();
	cout << "====================";
	cout << "tong tien " << quanly.tinhTien();
	return 0;
}