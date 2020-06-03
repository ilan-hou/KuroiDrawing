#include"Triangle.h"
Triangle::Triangle(std::array<Point, 3>iPoint_) {
    iPoint = iPoint_;
    ++nTriangles;
}
Triangle::Triangle() { ++nTriangles; };
int& Triangle::getNtri() {
    return nTriangles;
};
std::array<Point, 3>& Triangle::getAllPoint() { return iPoint; };
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
void Triangle::draw(int op) {
    this->setDrawEnvir();
    int temp[8] = { iPoint[0].getX(),iPoint[0].getY(),iPoint[1].getX(),iPoint[1].getY(), iPoint[2].getX(),
                     iPoint[2].getY(), iPoint[0].getX(),iPoint[0].getY() };
    if (0 == op) { drawpoly(4, temp); }
    if (1 == op) { fillpoly(4, temp); }
}
Triangle::~Triangle() {
};