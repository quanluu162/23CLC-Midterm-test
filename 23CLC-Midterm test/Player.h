// Player.h
#pragma once
#include <vector>
#include "Building.h"

class Player {
private:
    int level;
    int vang;
    int nangLuong;
    std::vector<Building*> congTrinhDaXay;

public:
    Player();

    // Tài nguyên
    int getVang() const;
    int getNangLuong() const;

    // Xây dựng, nâng cấp, thu hoạch
    bool xayCongTrinh(Building* b, int x, int y);
    void nangCapCongTrinh(Building* b);
    void thuHoach(Building* b);

    // Quản lý danh sách công trình
    void themCongTrinh(Building* b);
    void xoaCongTrinh(int index);

    // Thời gian
    void capNhatThoiGian();
};
