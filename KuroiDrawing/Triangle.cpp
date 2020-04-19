#include"Triangle.h"
Triangle::Triangle(std::array<Point, 3>iPoint_) { iPoint = iPoint_; }
Triangle::Triangle() {};
const std::array<Point, 3>* Triangle::getAllPoint() { return &iPoint; };
void Triangle::setOnePoint(const int& index, Point& point) {
    switch (index) {
    case 0: iPoint[0] = point;
        break;
    case 1: iPoint[1] = point;
        break;
    case 2: iPoint[2] = point;
        break;
    default:outtextxy(200, 200, "输入了非法的三角形点的下标");
    }
};