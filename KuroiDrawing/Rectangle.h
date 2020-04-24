#pragma once
#include"Closedshape.h"
class Rectangle :public Closedshape {
public:
    Rectangle(Point& point_, int height_, int width_);
    Rectangle();
    Rectangle(Rectangle& rectangle);//�������캯��
    const int& getWidth();
    const int& getHeight();
    const Point& getPoint();
    void draw();
    void setWidth(int& width_);
    void setHeight(int& height_);
    void setPoint(Point& point_);
    ~Rectangle();
private:
    Point point; //���ε����ϵ�
    int width, height;
    static int nRectangles;
};