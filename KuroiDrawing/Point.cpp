#include "Point.h"
Point::Point(int x_, int y_) :x{ x_ }, y{ y_ } {}
Point::Point() { this->x = this->y = 1; }
Point::Point(Point& point) {
    this->x = point.x;
    this->y = point.y;
}
const int& Point::getX() { return this->x; }
const int& Point::getY() { return this->y; }
void Point::setX(int& x_) { x = x_; }
void Point::setY(int& y_) { y = y_; }