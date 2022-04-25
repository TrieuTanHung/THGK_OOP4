#include "QuanLy.h"

QuanLy::QuanLy()
{
}

QuanLy::~QuanLy()
{
    // delete danh sach sinh vien
    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        delete danhSachSinhVien[i];
    }
}

void QuanLy::nhap()
{
    cout << "slhs=";
    int n;
    cin >> n;
    danhSachSinhVien.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "1. SVTN, 2.CTTT" << endl;
        int chon;
        cin >> chon;
        if (chon == 1)
            danhSachSinhVien[i] = new SinhVienTN();
        else if (chon == 2)
            danhSachSinhVien[i] = new SinhVienCTTT();
        else
            throw "may qua ngu";

        danhSachSinhVien[i]->Nhap();
    }
}
void QuanLy::xuat()
{

    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        danhSachSinhVien[i]->Xuat();
    }
}

int QuanLy::tinhTien()
{
    int tongTien = 0;
    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        int tmp = danhSachSinhVien[i]->tinhtien();
        if (tmp < 0)
            continue;
        tongTien += tmp;
    }
    return tongTien;
}