#pragma once
#include"Closedshape.h"
class Rectangle {
public:
    Rectangle(Point& point_, double height_, double width_);
    Rectangle();
    const double& getWidth();
    const double& getHeight();
    const Point& getPoint();
    void setWidth(double& width_);
    void setHeight(double& height_);
    void setPoint(Point& point_);
private:
    Point point; //矩形的左上点
    double width, height;
};