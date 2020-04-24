#include "Rectangle.h"
Rectangle::Rectangle(Point& point_, int height_, int width_) {
    point = point_;
    height = height_;
    width = width_;
};
Rectangle::Rectangle() {
    point = Point();
    height = width = 0;
}
const int& Rectangle::getWidth() { return this->width; };
const int& Rectangle::getHeight() { return this->height; };
const Point& Rectangle::getPoint() { return this->point; };
void Rectangle::setWidth(int& width_) { width = width_; };
void Rectangle::setHeight(int& height_) { height = height_; };
void Rectangle::setPoint(Point& point_) { point = point_; };
void Rectangle::draw() {
    this->setDrawEnvir();
    rectangle(point.getX(), point.getY(), point.getX() + width, point.getY() + height);//画一个有边框无填充的矩形，用于体现边框颜色
    bar(point.getX(), point.getY(), point.getX() + width, point.getY() + height);//画一个无边框有填充矩形，用于体现该矩形的填充颜色
};