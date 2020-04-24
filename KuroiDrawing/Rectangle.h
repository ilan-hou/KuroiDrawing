#pragma once
#include"Closedshape.h"
class Rectangle :public Closedshape {
public:
    Rectangle(Point& point_, int height_, int width_);
    Rectangle();
    const int& getWidth();
    const int& getHeight();
    const Point& getPoint();
    void draw();
    void setWidth(int& width_);
    void setHeight(int& height_);
    void setPoint(Point& point_);
private:
    Point point; //���ε����ϵ�
    int width, height;
};