#include "Point.h"
Point::Point(const double& x_, const double& y_) :x{ x_ }, y{ y_ } {}
Point::Point() : Point{ 1.0,1.0 } {}
const double& Point::getX() { return this->x; }
const double& Point::getY() { return this->y; }
void Point::setX(double& x_) { x = x_; }
void Point::setY(double& y_) { y = y_; }