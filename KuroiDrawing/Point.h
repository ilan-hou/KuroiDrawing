#pragma once
class Point {
public:
    Point(int x_, int y_);
    Point();
    Point(const Point& point);//�������캯��
    const int& getX();
    const int& getY();
    void setX(int& x_);
    void setY(int& y_);
private: int x = { 0 }, y = { 0 };
};