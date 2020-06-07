#pragma once
#include"Closedshape.h"
#include <stdexcept>
class Circle :public Closedshape {
public:
    void draw(int op);//1Ϊ�����Բ��0Ϊ�������Բ
    bool operator >(const Circle& c)const;
    bool operator <(const Circle& c)const;
    bool operator >=(const Circle& c)const;
    bool operator <=(const Circle& c)const;
    bool operator ==(const Circle& c)const;
    bool operator !=(const Circle& c)const;
    Circle& operator =(Circle& c);
    int& operator [](const int index);
    bool isEqual(const Circle& c)const;
    Circle(Point& point_, double radius_);
    Circle();
    Circle(Circle& circle);//�������캯��
    Point& getCenterPoint();
    int getRadius()const;
    static int& getNcircles();
    void setCenterPoint(const Point& point);
    void setRadius(const int& radius_);
    ~Circle();
private:
    Point center_point{ 0,0 };
    int radius = { 0 };
    static int nCircles;
};