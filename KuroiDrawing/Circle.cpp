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
void Circle::draw() {
    this->setDrawEnvir();
    circlef(center_point.getX(), center_point.getY(), radius);
};
const Point& Circle::getCenterPoint() { return this->center_point; };
const double& Circle::getRadius() { return this->radius; };
int Circle::getNcircles() { return nCircles; };
void Circle::setCenterPoint(const Point& point) { center_point = point; };
void Circle::setRadius(const double& radius_) { radius = radius_; };
Circle::~Circle() {
    --nCircles;
    outtextxy(200, 200, this->to_char(nCircles));
};