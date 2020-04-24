#include "Line.h"
Line::Line(Point& start_point_, Point& end_point_) {
    start_point = start_point_;
    end_point = end_point_;
};
Line::Line() { start_point = end_point = Point{ 0 ,0 }; };
void Line::draw() {
    setlinewidth(this->linethick);//设置线的宽度
    setcolor(this->linecolor.getColor());//设置画线的颜色
    line(start_point.getX(), start_point.getY(), end_point.getX(), end_point.getY());
}
void Line::setStartPoint(Point& point_) { start_point = point_; };
void Line::setEndPoint(Point& point_) { end_point = point_; };
void Line::setLineColor(Color& color_) { linecolor = color_; };
void Line::setLineThick(int& thick_) { linethick = thick_; };
Point& Line::getStartPoint() { return this->start_point; };
Point& Line::getEndPoint() { return this->end_point; };
Color& Line::getLineColor() { return this->linecolor; };
const int& Line::getLineThick() { return this->linethick; };