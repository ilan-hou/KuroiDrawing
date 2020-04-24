#include "Point.h"
Point::Point(const int& x_, const int& y_) :x{ x_ }, y{ y_ } {}
Point::Point() : Point{ 1.0,1.0 } {}
const int& Point::getX() { return this->x; }
const int& Point::getY() { return this->y; }
void Point::setX(int& x_) { x = x_; }
void Point::setY(int& y_) { y = y_; }