#pragma once
#include "Closedshape.h"
#include <array>
class Triangle :public Closedshape {
public:
    Triangle(std::array<Point, 3>iPoint_);
    Triangle();
    const std::array<Point, 3>* getAllPoint();//�ú������ڻ��ָ���������ζ��ж���������ָ��
    void setOnePoint(const int& index, Point& point);//�ú��������޸���������������һ�����������
private: std::array<Point, 3>iPoint;//����һ��������Point��Ԫ�ص��������ڴ�������ε�������������
};