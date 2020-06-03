#pragma once
#include"Closedshape.h"
class Circle :public Closedshape {
public:
    void draw(int op);//1Ϊ�����Բ��0Ϊ�������Բ
    Circle(Point& point_, double radius_);
    Circle();
    Circle(Circle& circle);//�������캯��
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