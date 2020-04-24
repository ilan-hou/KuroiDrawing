#include"Triangle.h"
Triangle::Triangle(std::array<Point, 3>iPoint_) {
    iPoint = iPoint_;
    ++nTriangles;
}
Triangle::Triangle() { ++nTriangles; };
const std::array<Point, 3>* Triangle::getAllPoint() { return &iPoint; };
void Triangle::draw() {
    this->setDrawEnvir();
    int temp[6] = { iPoint[0].getX(),iPoint[0].getY(),iPoint[1].getX(), iPoint[1].getY(),iPoint[2].getX(),iPoint[2].getY() };
    //����һ����ʱint���鴢�������ζ����������������
    drawpoly(3, temp);//���ڻ����߿����ֱ߿���ɫ
    fillpoly(3, temp);//�������������ɫ
};
void Triangle::setOnePoint(const int& index, Point& point) {
    switch (index) {
    case 0: iPoint[0] = point;
        break;
    case 1: iPoint[1] = point;
        break;
    case 2: iPoint[2] = point;
        break;
    default:outtextxy(200, 200, "�����˷Ƿ��������ε���±�");
    }
};
Triangle::~Triangle() {
    --nTriangles;
    outtextxy(210, 210, this->to_char(nTriangles));
};