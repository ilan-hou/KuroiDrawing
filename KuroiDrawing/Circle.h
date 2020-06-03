#pragma once
#include"Closedshape.h"
class Circle :public Closedshape {
public:
    void draw(int op);//1为画填充圆，0为画无填充圆
    Circle(Point& point_, double radius_);
    Circle();
    Circle(Circle& circle);//拷贝构造函数
    Point& getCenterPoint();
    int& getRadius();
    static int& getNcircles();
    void setCenterPoint(const Point& point);
    void setRadius(const int& radius_);
    ~Circle();
private:
    Point center_point{ 0,0 };
    int radius = { 0 };
    static int nCircles;
};