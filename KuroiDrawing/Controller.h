#pragma once
#include "graphics.h"
#include <ege/sys_edit.h>
class Controller {
public:
    Controller(int dimension_, int width_, int height_);
    Controller();
    void initialize();
    void cleardraw();
    void clearNotice();//用于刷新输入框
    void close();
    void notice(const char* c);
    const int& getDimension();
    const int& getWidth();
    const int& getHeight();
    void setHeight(int& height_);
    void setWidth(int& width_);
    void setDimension(int& dimension_);
    void clearNum();//清空显示图形数目信息的区域
    void showNum();//显示图形数目的函数
    void setDrawV();//设置绘图区域的函数
private: int dimension, width, height;//dimension为绘图窗口的维度，有二维三维两种维度
};