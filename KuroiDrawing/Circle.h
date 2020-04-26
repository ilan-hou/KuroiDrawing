#pragma once
#include"Closedshape.h"

class Circle :public Closedshape {
public:
    void draw();
    Circle(Point& point_, double radius_);
    Circle();
    Circle(Circle& circle);//¿½±´¹¹Ôìº¯Êý
    const Point& getCenterPoint();
    const double& getRadius();
    static int getNcircles();
    void setCenterPoint(const Point& point);
    void setRadius(const double& radius_);
    ~Circle();
private:
    Point center_point;
    double radius;
    static int nCircles;
};