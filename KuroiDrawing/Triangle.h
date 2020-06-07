#pragma once
#include "Closedshape.h"
#include <array>
#include <stdexcept>
class Triangle :public Closedshape {
public:
    const double getArea();//���ú��׹�ʽ���������ε����
    bool operator >(Triangle& t);
    bool operator <(Triangle& t);
    bool operator >=(Triangle& t);
    bool operator <=(Triangle& t);
    bool operator ==(Triangle& t);
    bool operator !=(Triangle& t);
    Triangle& operator =(Triangle& t);
    int& operator [](const int index);
    bool isEqual(Triangle& t);
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