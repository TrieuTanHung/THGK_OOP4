#include "SinhVien.h"

SinhVien::SinhVien()
{

}
SinhVien::~SinhVien()
{

}
void SinhVien::Nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cout << "Nhap so mon moi dang ky: ";
	cin >> soMonDangKyHocLai;
	cout << "Nhap so mon dang ky thi lai: ";
	cin >> soMonDangKyThiLai;
	cout << "Nhap so mon dang ky hoc lai: ";
	cin >> soMonDangKyHocLai;
}
void SinhVien::Xuat()
{
	cout << "\nHo ten: " << hoTen;
	cout << "\nTuoi: " << tuoi;
	cout << "\nMSSV: " << MSSV;
	cout << "\nSo mon moi dang ky: " << soMonDangKyHocLai;
	cout << "\nSo mon dang ky thi lai: " << soMonDangKyThiLai;
	cout << "\nSo mon dang ky hoc lai: " << soMonDangKyHocLai;
}
