#pragma once
#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <string>
using namespace std;

class Building {
private:
	// tên công trình, loại công trình, chi phí xây dựng, thời
	// gian xây dựng, cấp độ, tài nguyên, thời gian sản xuất.
	string ten;
	string loai;
	int thoiGianXayDung;
	int chiPhiXayDung;

	int capDo;
	int taiNguyen;
	int thoiGianSanXuat;
	int tgSanXuatConLai;
public:
	Building();
	Building(string ten, string loai, int tgXay, int chiPhi, int cap, int taiNguyen, int tgSX);
	Building(const Building& other);
	~Building();
	friend istream& operator>>(istream& is, Building& A);
	friend ostream& operator<<(ostream& os, const Building& A);

	// Getters
	std::string getLoai() const;
	int getCapDo() const;
	int getTaiNguyen() const;
	int getChiPhi() const;
	int getThoiGianSanXuatConLai() const;

	// Setters
	void giamThoiGianXayDung();
	void giamThoiGianSanXuat();
	void resetSanXuat();

	// Logic trò chơi
	bool isHoanThanhXayDung() const;
	bool isSanXuatXong() const;
	void nangCap();
};

#endif