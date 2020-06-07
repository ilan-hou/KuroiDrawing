#pragma once
#include "Closedshape.h"
#include <array>
#include <stdexcept>
class Triangle :public Closedshape {
public:
    const double getArea();//利用海伦公式计算三角形的面积
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
    std::array<Point, 3>& getAllPoint();//该函数用于获得指向存放三角形多有顶点的数组的指针
    void setOnePoint(const int& index, Point& point);//该函数用于修改三角形其中任意一个顶点的坐标
    ~Triangle();
private: std::array<Point, 3>iPoint;//建立一个有三个Point类元素的数组用于存放三角形的三个顶点坐标
       static int nTriangles;
};