#pragma once
#include"Closedshape.h"
#include <stdexcept>
class Rect :public Closedshape {
public:
    Rect(Point& point_, int height_, int width_);
    Rect();
    Rect(Rect& rectangle);//�������캯��
    const int getArea()const;//��������ĺ���
    bool isEqual(const Rect& r)const;
    bool operator >(const Rect& r)const;
    bool operator <(const Rect& r)const;
    bool operator >=(const Rect& r)const;
    bool operator <=(const Rect& r)const;
    bool operator ==(const Rect& r)const;
    bool operator !=(const Rect& r)const;
    Rect& operator =(Rect& r);
    int& operator [](const int index);
    const int& getWidth()const;
    const int& getHeight()const;
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