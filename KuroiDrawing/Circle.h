#pragma once
#include"Closedshape.h"

class Circle :public Closedshape {
public:
    Circle(Point point_, double radius_);
    Circle();
    const Point& getCenterPoint();
    const double& getRadius();
    void setCenterPoint(const Point& point);
    void setRadius(const double& radius_);
private:
    Point center_point;
    double radius;
};