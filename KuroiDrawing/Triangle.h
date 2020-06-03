#pragma once
#include "Closedshape.h"
#include <array>
class Triangle :public Closedshape {
public:
    void draw(int op);
    Triangle(std::array<Point, 3>iPoint_);
    Triangle();
    Triangle(Triangle& triangle);
    static int& getNtri();
    std::array<Point, 3>& getAllPoint();//�ú������ڻ��ָ���������ζ��ж���������ָ��
    void setOnePoint(const int& index, Point& point);//�ú��������޸���������������һ�����������
    ~Triangle();
private: std::array<Point, 3>iPoint;//����һ��������Point��Ԫ�ص��������ڴ�������ε�������������
       static int nTriangles;
};