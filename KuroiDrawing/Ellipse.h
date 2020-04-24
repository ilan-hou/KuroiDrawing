#pragma once
#include "Closedshape.h"
class Ellipse :public Closedshape {
public:
    Ellipse();

    const int& getYradius();
    const int& getXradius();
    Point& getPoint();
    const int& getStangle();
    const int& getEndangle();
    void setYradius(int& yradius_);
    void setXradius(int& xradius_);
    void setPoint(Point& point_);
    void setStangle(int stangle_);
    void setEndangle(int endangle_);
private:double yradius, xradius, stangle, endangle;
       Point point;
};