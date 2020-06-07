#include"Triangle.h"
bool Triangle::operator >(Triangle& t) { return this->getArea() > t.getArea(); };
bool Triangle:: operator <(Triangle& t) { return this->getArea() < t.getArea(); };
bool Triangle::operator >=(Triangle& t) { return this->getArea() >= t.getArea(); };
bool Triangle::operator <=(Triangle& t) { return this->getArea() <= t.getArea(); };
bool  Triangle::isEqual(Triangle& t) {
    if (this->getBoarderColor() == t.getBoarderColor() && this->getFillColor() == t.getFillColor()
        && this->iPoint[0] == t.getAllPoint()[0] && this->iPoint[1] == t.getAllPoint()[1] && this->iPoint[2] == t.getAllPoint()[2]) {
        return true;
    }
    else { return false; }
};
Triangle& Triangle::operator =(Triangle& t) {
    iPoint = t.getAllPoint();
    return *this;
};
bool Triangle::operator ==(Triangle& t) { return this->isEqual(t); };
bool Triangle::operator !=(Triangle& t) { return !(this->isEqual(t)); };
int& Triangle::operator [](const int index) {
    switch (index) {
    case 0: {return iPoint[0].getX();}
          break;
    case 1: {return iPoint[0].getY();}
          break;
    case 2: {return iPoint[1].getX();}
          break;
    case 3: {return iPoint[1].getY();}
          break;
    case 4: {return iPoint[2].getX();}
          break;
    case 5: {return iPoint[2].getY();}
          break;
    default: {throw std::out_of_range("索引值超出范围！");}
    }
};
const double Triangle::getArea() {
    double l1, l2, l3, p, Area;
    l1 = sqrt(pow((iPoint[0].getX() - iPoint[1].getX()), 2) + pow((iPoint[0].getY() - iPoint[1].getY()), 2));
    l2 = sqrt(pow((iPoint[0].getX() - iPoint[2].getX()), 2) + pow((iPoint[0].getY() - iPoint[2].getY()), 2));
    l3 = sqrt(pow((iPoint[1].getX() - iPoint[2].getX()), 2) + pow((iPoint[1].getY() - iPoint[2].getY()), 2));
    p = (l1 + l2 + l3) / 2;
    Area = sqrt(p * (p - l1) * (p - l2) * (p - l3));
    return Area;
};
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