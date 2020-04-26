#pragma once
#include "graphics.h"
class Controller {
public:
    Controller(int dimension_, int width_, int height_);
    Controller();
    void initialize();
    void cleardraw();
    void clearN();//用于刷新输入框
    void close();
    const int& getDimension();
    const int& getWidth();
    const int& getHeight();
    void setHeight(int& height_);
    void setWidth(int& width_);
    void setDimension(int& dimension_);
private: int dimension, width, height;//dimension为绘图窗口的维度，有二维三维两种维度
};