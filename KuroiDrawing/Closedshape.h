#pragma once
#include"Color.h"
#include"Point.h"
//所有封闭图形的基类，包含了边界颜色和填充颜色二个成员
class Closedshape {
public:
    virtual void draw(int op) = 0;//纯虚函数，使子类必须override该函数
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
private:  Color fill_color = WHITE, boarder_color = BLACK;
       int linewidth = 1, linestyle = SOLID_LINE;
};