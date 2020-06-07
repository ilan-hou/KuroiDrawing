#pragma once
#include"Closedshape.h"
#include <stdexcept>
class Rect :public Closedshape {
public:
    Rect(Point& point_, int height_, int width_);
    Rect();
    Rect(Rect& rectangle);//拷贝构造函数
    const int getArea()const;//计算面积的函数
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
    Point point; //矩形的左上点
    int width, height;
    static int nRectangles;
};