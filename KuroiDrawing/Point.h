#pragma once
class Point {
public:
    Point(const double& x_, const double& y_);
    Point();
    const double& getX();
    const double& getY();
    void setX(double& x_);
    void setY(double& y_);
private: double x, y;
};