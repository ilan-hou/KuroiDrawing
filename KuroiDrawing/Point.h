#pragma once
#include <stdexcept>
class Point {
public:
    Point(int x_, int y_);
    Point();
    Point& operator +(Point& p);
    bool isEqual(Point& p)const;
    bool operator ==(Point& p)const;
    bool operator !=(Point& p)const;
    int& operator[](const int index);
    Point(const Point& point);//¿½±´¹¹Ôìº¯Êý
    int& getX();
    int& getY();
    void setX(int& x_);
    void setY(int& y_);
private: int x = { 0 }, y = { 0 };
};