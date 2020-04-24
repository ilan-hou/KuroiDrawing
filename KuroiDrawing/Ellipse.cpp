#include "Ellipse.h"
const int& Ellipse::getYradius() { return this->yradius; };
const int& Ellipse::getXradius() { return this->xradius; };
Point& Ellipse::getPoint() { return this->point; };
const int& Ellipse::getStangle() { return this->stangle; };
const int& Ellipse::getEndangle() { return this->endangle; };
void Ellipse::setYradius(int& yradius_) { yradius = yradius_; };
void Ellipse::setXradius(int& xradius_) { xradius = xradius_; };
void Ellipse::setPoint(Point& point_) { point = point_; };
void Ellipse::setStangle(int stangle_) { stangle = stangle_; };
void Ellipse::setEndangle(int endangle_) { endangle = endangle_; }