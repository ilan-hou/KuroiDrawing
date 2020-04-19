#include"Circle.h"
Circle::Circle(Point point_, double radius_) {
    center_point = point_;
    radius = radius_;
    circlef(center_point.getX(), center_point.getY(), radius);//�������Բ���Ƴ�
    delay(1000);//�ӳ�һ�룬����չʾ��ͼЧ��
};
Circle::Circle() {
    center_point = Point();
    radius = 0;
    circlef(center_point.getX(), center_point.getY(), radius);
    delay(1000);
}
const Point& Circle::getCenterPoint() { return this->center_point; };
const double& Circle::getRadius() { return this->radius; };
void Circle::setCenterPoint(const Point& point) { center_point = point; };
void Circle::setRadius(const double& radius_) { radius = radius_; };