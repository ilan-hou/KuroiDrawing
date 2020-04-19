#pragma once
#include "graphics.h"
class Color {
public:
    Color(BYTE R_, BYTE G_, BYTE B_);
    Color();
    const BYTE& getR();
    const BYTE& getG();
    const BYTE& getB();
    const color_t& getColor();
    void setR(const BYTE& R_);
    void setG(const BYTE& G_);
    void setB(const BYTE& B_);
    void setColor(const color_t& color_);
private:
    BYTE R, G, B;
    color_t color;
};