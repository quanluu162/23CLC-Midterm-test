// ==============================
// Building.cpp
// ==============================
#include "Building.h"
#include <iostream>
#include <regex>

using namespace std;

Building::Building() {
    ten = "";
    loai = "Dan dung";
    chiPhiXayDung = 0;
    thoiGianXayDung = 60;
    capDo = 1;
    taiNguyen = 0;
    thoiGianSanXuat = 60;
    tgSanXuatConLai = thoiGianSanXuat;
}

Building::Building(string ten, string loai, int chiPhi, int thoiGianXayDung, int capDo, int taiNguyen, int thoiGianSanXuat) {
    this->ten = ten;
    this->loai = loai;
    this->chiPhiXayDung = chiPhi;
    this->thoiGianXayDung = thoiGianXayDung;
    this->capDo = capDo;
    this->taiNguyen = taiNguyen;
    this->thoiGianSanXuat = thoiGianSanXuat;
    this->tgSanXuatConLai = thoiGianSanXuat;
}

Building::Building(const Building& other) {
    ten = other.ten;
    loai = other.loai;
    chiPhiXayDung = other.chiPhiXayDung;
    thoiGianXayDung = other.thoiGianXayDung;
    capDo = other.capDo;
    taiNguyen = other.taiNguyen;
    thoiGianSanXuat = other.thoiGianSanXuat;
    tgSanXuatConLai = other.tgSanXuatConLai;
}

Building::~Building() {
    // Không cần làm gì vì không cấp phát động
}

istream& operator>>(istream& in, Building& b) {
    cout << "Nhap ten cong trinh: ";
    getline(in, b.ten);
    cout << "Nhap loai cong trinh (Dan dung/Thuong mai): ";
    getline(in, b.loai);
    cout << "Nhap chi phi xay dung: ";
    in >> b.chiPhiXayDung;
    cout << "Nhap thoi gian xay dung: ";
    in >> b.thoiGianXayDung;
    cout << "Nhap cap do: ";
    in >> b.capDo;
    cout << "Nhap tai nguyen tao ra: ";
    in >> b.taiNguyen;
    cout << "Nhap thoi gian san xuat: ";
    in >> b.thoiGianSanXuat;
    b.tgSanXuatConLai = b.thoiGianSanXuat;
    in.ignore();
    return in;
}

ostream& operator<<(ostream& out, const Building& b) {
    out << "Ten: " << b.ten << endl;
    out << "Loai: " << b.loai << endl;
    out << "Chi phi: " << b.chiPhiXayDung << endl;
    out << "Thoi gian xay dung: " << b.thoiGianXayDung << endl;
    out << "Cap do: " << b.capDo << endl;
    out << "Tai nguyen: " << b.taiNguyen << endl;
    out << "Thoi gian san xuat: " << b.thoiGianSanXuat << endl;
    out << "Thoi gian san xuat con lai: " << b.tgSanXuatConLai << endl;
    return out;
}

bool Building::isHoanThanhXayDung() const {
    return thoiGianXayDung <= 0;
}

bool Building::isSanXuatXong() const {
    return tgSanXuatConLai <= 0;
}

void Building::giamThoiGianXayDung() {
    if (thoiGianXayDung > 0) thoiGianXayDung--;
}

void Building::giamThoiGianSanXuat() {
    if (tgSanXuatConLai > 0) tgSanXuatConLai--;
}

void Building::resetSanXuat() {
    tgSanXuatConLai = thoiGianSanXuat;
}

void Building::nangCap() {
    capDo++;
    taiNguyen *= 2;
    thoiGianXayDung = 60;
}

int Building::getTaiNguyen() const {
    return taiNguyen;
}

int Building::getChiPhi() const {
    return chiPhiXayDung;
}

int Building::getCapDo() const {
    return capDo;
}

int Building::getThoiGianSanXuatConLai() const {
    return tgSanXuatConLai;
}

string Building::getLoai() const {
    return loai;
}
