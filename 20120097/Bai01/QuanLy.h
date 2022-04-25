#pragma once

#include <iostream>
#include <string>
#include "./SinhVien.h"
#include "./SinhVienCTTT.h"
#include "./SinhVienTN.h"
#include <vector>
using namespace std;

class QuanLy
{
private:
    vector<SinhVien *> danhSachSinhVien;

public:
    QuanLy(/* args */);
    ~QuanLy();
    void nhap();
    void xuat();
    int tinhTien();
};

