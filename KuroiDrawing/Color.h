#pragma once
#include "graphics.h"
#include<stdexcept>
class Color {
public:
    BYTE& operator[](const int index);
    Color& operator ++();
    Color& operator --();
    Color operator ++(int dummy);
    Color operator --(int dummy);
    bool isEqual(const Color& c)const;
    bool operator==(const Color& c)const;
    bool operator!=(const Color& c)const;
    Color(BYTE R_, BYTE G_, BYTE B_);
    Color(color_t color_);
    Color();
    Color(Color& color);//¿½±´¹¹Ôìº¯Êý
    const BYTE getR()const;
    const BYTE getG()const;
    const BYTE getB()const;
    const color_t getColor()const;
    void setR(const BYTE& R_);
    void setG(const BYTE& G_);
    void setB(const BYTE& B_);
    void setColor(const color_t& color_);
private:
    BYTE R, G, B;
    color_t color;
};