#include "Color.h"
Color::Color(BYTE R_, BYTE G_, BYTE B_) :R{ R_ }, G{ G_ }, B{ B_ }{};
Color::Color() { R = G = B = 0; }
const BYTE& Color::getR() { return this->R; };
const BYTE& Color::getG() { return this->G; };
const BYTE& Color::getB() { return this->B; };
const color_t& Color::getColor() { return this->color; };
void Color::setR(const BYTE& R_) { R = R_; };
void Color::setG(const BYTE& G_) { G = G_; };
void Color::setB(const BYTE& B_) { B = B_; };
void Color::setColor(const color_t& color_) { color = color_; }