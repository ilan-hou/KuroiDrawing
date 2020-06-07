#include "Point.h"
Point::Point(int x_, int y_) :x{ x_ }, y{ y_ } {}
Point::Point() { this->x = this->y = 1; }
Point::Point(const Point& point) {
    this->x = point.x;
    this->y = point.y;
}
Point& Point::operator +(Point& p) {
    int x = (this->x + p.getX()) / 2;
    int y = (this->y + p.getY()) / 2;
    Point p_(x, y);
    return p_;
};
bool  Point::isEqual(Point& p)const {
    if (this->x == p.getX() && this->y == p.getY()) {
        return true;
    }
    else { return false; }
};
bool Point::operator ==(Point& p)const {
    return this->isEqual(p);
};
bool Point::operator !=(Point& p)const {
    return !(this->isEqual(p));
};
int& Point::operator[](const int index) {
    switch (index) {
    case 0: {return x;}
          break;
    case 1: {return y;}
          break;
    default: {throw std::out_of_range("索引值只能为0或1！");}
    }
};
int& Point::getX() { return this->x; }
int& Point::getY() { return this->y; }
void Point::setX(int& x_) { x = x_; }
void Point::setY(int& y_) { y = y_; }