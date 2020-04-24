#pragma once
#include "Point.h"
#include"Color.h"
class Line {
    Line(Point& start_point_, Point& end_point_);
    Line();
    void draw();
    void setStartPoint(Point& point_);
    void setEndPoint(Point& point_);
    void setLineColor(Color& color_);
    void setLineThick(int& thick_);
    Point& getStartPoint();
    Point& getEndPoint();
    Color& getLineColor();
    const int& getLineThick();
private:Point start_point, end_point;
       Color linecolor;
       int linethick;
};