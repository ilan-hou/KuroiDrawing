#pragma once
#include"Color.h"
#include"Point.h"
//所有封闭图形的基类，包含了边界颜色和填充颜色二个成员
class Closedshape {
public:
    virtual void draw() = 0;//纯虚函数，使子类必须override该函数
    Closedshape(Color fill_color_, Color boarder_color_);
    Closedshape();
    void setLinewidth(const int linewidth_);
    void setFillColor(const Color& fill_color_);
    void setBoaderColor(const Color& boarder_color_);
    void setLinestyle(const int linestyle_);
    void setDrawEnvir();//设置绘图时的各种参数的函数
    const int& getLinewidth();
    Color& getFillColor();
    Color& getBoarderColor();
    const int& getLinestyle();
    const char* to_char(int& num);//将表示现在对象数目的静态变量转换为char数组的函数
private:  Color fill_color, boarder_color;
       int linewidth = 1, linestyle = SOLID_LINE;
};