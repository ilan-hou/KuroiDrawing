#pragma once
#include "Point.h"
#include"Color.h"
class Line {
    Line(Point& start_point_, Point& end_point_);
    Line();
    Line(Line& line);//¿½±´¹¹Ôìº¯Êý
    void draw();
    void setStartPoint(Point& point_);
    void setEndPoint(Point& point_);
    void setLineColor(Color& color_);
    void setLineThick(int& thick_);
    Point& getStartPoint();
    Point& getEndPoint();
    Color& getLineColor();
    const int& getLineThick();
    ~Line();
    const char* to_char(int& num);
private:Point start_point, end_point;
       Color linecolor;
       int linethick;
       static int nLines;
};