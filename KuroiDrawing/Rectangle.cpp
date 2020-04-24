#include "Rectangle.h"
int nRectangles = 0;
Rectangle::Rectangle(Point& point_, int height_, int width_) {
    point = point_;
    height = height_;
    width = width_;
    ++nRectangles;
};
Rectangle::Rectangle() {
    point = Point();
    height = width = 0;
    ++nRectangles;
}
Rectangle::Rectangle(Rectangle& rectangle) {
    this->width = rectangle.width;
    this->height = rectangle.height;
    this->point = rectangle.point;
    this->setBoaderColor(rectangle.getBoarderColor());
    this->setFillColor(rectangle.getFillColor());
    this->setLinewidth(rectangle.getLinewidth());
    this->setLinestyle(rectangle.getLinestyle());
    ++nRectangles;
}
Rectangle::~Rectangle() {
    --nRectangles;
    outtextxy(220, 220, to_char(nRectangles));
};
const int& Rectangle::getWidth() { return this->width; };
const int& Rectangle::getHeight() { return this->height; };
const Point& Rectangle::getPoint() { return this->point; };
void Rectangle::setWidth(int& width_) { width = width_; };
void Rectangle::setHeight(int& height_) { height = height_; };
void Rectangle::setPoint(Point& point_) { point = point_; };
void Rectangle::draw() {
    this->setDrawEnvir();
    rectangle(point.getX(), point.getY(), point.getX() + width, point.getY() + height);//��һ���б߿������ľ��Σ��������ֱ߿���ɫ
    bar(point.getX(), point.getY(), point.getX() + width, point.getY() + height);//��һ���ޱ߿��������Σ��������ָþ��ε������ɫ
};