#pragma once
class Point {
public:
    Point(int x_, int y_);
    Point();
    Point(Point& point);//¿½±´¹¹Ôìº¯Êý
    const int& getX();
    const int& getY();
    void setX(int& x_);
    void setY(int& y_);
private: int x, y;
};