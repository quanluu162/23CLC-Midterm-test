// City.h
#pragma once
#include <vector>
#include "Building.h"

class City {
private:
    int hang, cot;
    std::vector<std::vector<Building*>> banDo;

public:
    City(int h = 5, int c = 5);
    ~City();

    bool coTheXay(int x, int y) const;
    void datCongTrinh(int x, int y, Building* b);
    void hienThiBanDo() const;
};
