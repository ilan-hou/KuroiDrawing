#pragma once
#include"Closedshape.h"
class Rect :public Closedshape {
public:
    Rect(Point& point_, int height_, int width_);
    Rect();
    Rect(Rect& rectangle);//�������캯��
    const int& getWidth();
    const int& getHeight();
    Point& getPoint();
    static int& getNrect();
    void draw(int op);
    void setWidth(int& width_);
    void setHeight(int& height_);
    void setPoint(Point& point_);
    ~Rect();
private:
    Point point; //���ε����ϵ�
    int width, height;
    static int nRectangles;
};