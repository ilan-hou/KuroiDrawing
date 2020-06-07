#include "Color.h"
Color::Color(BYTE R_, BYTE G_, BYTE B_) :R{ R_ }, G{ G_ }, B{ B_ }{color = EGERGB(R, G, B);};
Color::Color() {
    R = G = B = 0;
    color = EGERGB(R, G, B);
}
Color::Color(color_t color_) :color{ color_ } {}
Color::Color(Color& color) {
    this->B = color.B;
    this->R = color.R;
    this->G = color.G;
    this->color = color.color;
}
bool Color::operator==(const Color& c)const {
    return this->isEqual(c);
};
bool Color::operator!=(const Color& c)const {
    return !(this->isEqual(c));
};
bool Color::isEqual(const Color& c)const {
    if (this->color == c.getColor()) { return true; }
    else { return false; }
};
BYTE& Color::operator[](const int index) {
    switch (index) {
    case 0: {return this->R;}
          break;
    case 1: {return this->G;}
          break;
    case 2: {return this->B;}
          break;
    default: {throw std::out_of_range("Ë÷ÒýÖµ³¬³ö·¶Î§£¡");}
    }
};
Color& Color::operator ++() {
    if (R < 255) { R = R + 1; }
    if (G < 255) { G = G + 1; }
    if (B < 255) { B = B + 1; }
    return *this;
};
Color& Color::operator --() {
    if (R > 0) { R = R - 1; }
    if (G > 0) { G = G - 1; }
    if (B > 0) { B = B - 1; }
    return *this;
};
Color Color::operator ++(int dummy) {
    Color temp(R, G, B);
    if (R < 255) { R = R + 1; }
    if (G < 255) { G = G + 1; }
    if (B < 255) { B = B + 1; }
    return temp;
};
Color Color::operator --(int dummy) {
    Color temp(R, G, B);
    if (R > 0) { R = R - 1; }
    if (G > 0) { G = G - 1; }
    if (B > 0) { B = B - 1; }
    return temp;
};
const BYTE Color::getR() const { return this->R; };
const BYTE Color::getG() const { return this->G; };
const BYTE Color::getB() const { return this->B; };
const color_t Color::getColor()const { return this->color; };
void Color::setR(const BYTE& R_) { R = R_; };
void Color::setG(const BYTE& G_) { G = G_; };
void Color::setB(const BYTE& B_) { B = B_; };
void Color::setColor(const color_t& color_) { color = color_; }