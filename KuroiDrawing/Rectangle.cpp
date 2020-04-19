#include "Rectangle.h"
Rectangle::Rectangle(Point& point_, double height_, double width_) {
    point = point_;
    height = height_;
    width = width_;
};
Rectangle::Rectangle() {
    point = Point();
    height = width = 0;
}
const double& Rectangle::getWidth() { return this->width; };
const double& Rectangle::getHeight() { return this->height; };
const Point& Rectangle::getPoint() { return this->point; };
void Rectangle::setWidth(double& width_) { width = width_; };
void Rectangle::setHeight(double& height_) { height = height_; };
void Rectangle::setPoint(Point& point_) { point = point_; };