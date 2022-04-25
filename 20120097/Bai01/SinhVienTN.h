#pragma once

#include <iostream>
#include <string>
#include "./SinhVien.h"
using namespace std;
class SinhVienTN : public SinhVien
{

public:
    SinhVienTN() {}
    ~SinhVienTN() {}

    virtual int tinhtien()
    {
        if ((soMonMoiDangKy + soMonDangKyHocLai) < 5)
            return -1;
        int sotien = 500000 +
                     soMonMoiDangKy * 200000 +
                     soMonDangKyThiLai * 50000 +
                     soMonDangKyHocLai * 100000;
        return sotien;
    }
};
