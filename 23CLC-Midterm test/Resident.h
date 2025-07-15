// Resident.h
#pragma once
#include <string>

class Resident {
private:
    std::string ten;
    int tuoi;
    std::string ngheNghiep;
    int khaNangSanXuat;

public:
    Resident();
    Resident(std::string t, int tuoi, std::string nghe, int k);

    friend std::istream& operator>>(std::istream& in, Resident& r);
    friend std::ostream& operator<<(std::ostream& out, const Resident& r);

    int getKhaNang() const;
};

