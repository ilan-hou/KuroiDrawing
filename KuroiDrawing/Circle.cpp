#include"Circle.h"
Circle::Circle(Point& point_, double radius_) {
    center_point = point_;
    radius = radius_;
    ++nCircles;
};
Circle::Circle() {
    center_point = Point();
    radius = 0;
    ++nCircles;
}
Circle::Circle(Circle& circle) {
    this->center_point = circle.center_point;
    this->radius = circle.radius;
    this->setBoaderColor(circle.getBoarderColor());
    this->setFillColor(circle.getFillColor());
    this->setLinewidth(circle.getLinewidth());
    this->setLinestyle(circle.getLinestyle());
    ++nCircles;
}
void Circle::draw(int op) {
    this->setDrawEnvir();
    if (0 == op) { circle(center_point.getX(), center_point.getY(), radius); }
    else if (1 == op) { pieslice(center_point.getX(), center_point.getY(), 0, 360, radius); }
};
Point& Circle::getCenterPoint() { return this->center_point; };
int& Circle::getRadius() { return this->radius; };
int& Circle::getNcircles() { return nCircles; };
void Circle::setCenterPoint(const Point& point) { center_point = point; };
void Circle::setRadius(const int& radius_) { radius = radius_; };
Circle::~Circle() {
};