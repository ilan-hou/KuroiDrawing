#include "Rect.h"
int nRectangles = 0;
Rect::Rect(Point& point_, int height_, int width_) {
    point = point_;
    height = height_;
    width = width_;
    ++nRectangles;
};
int& Rect::getNrect() {
    return nRectangles;
};
Rect::Rect() {
    point = Point();
    height = width = 0;
    ++nRectangles;
}
Rect::Rect(Rect& rectangle) {
    this->width = rectangle.width;
    this->height = rectangle.height;
    this->point = rectangle.point;
    this->setBoaderColor(rectangle.getBoarderColor());
    this->setFillColor(rectangle.getFillColor());
    this->setLinewidth(rectangle.getLinewidth());
    this->setLinestyle(rectangle.getLinestyle());
    ++nRectangles;
}
Rect::~Rect() {
};
const int& Rect::getWidth() { return this->width; };
const int& Rect::getHeight() { return this->height; };
Point& Rect::getPoint() { return this->point; };
void Rect::setWidth(int& width_) { width = width_; };
void Rect::setHeight(int& height_) { height = height_; };
void Rect::setPoint(Point& point_) { point = point_; };
void Rect::draw(int op) {
    this->setDrawEnvir();
    if (0 == op) {
        rectangle(point.getX(), point.getY(), point.getX() + width, point.getY() + height);
    }
    if (1 == op) {
        bar(point.getX(), point.getY(), point.getX() + width, point.getY() + height);
    }
};