#pragma once
class Point {
public:
    Point(const int& x_, const int& y_);
    Point();
    const int& getX();
    const int& getY();
    void setX(int& x_);
    void setY(int& y_);
private: int x, y;
};