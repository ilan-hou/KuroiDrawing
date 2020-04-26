#include "Controller.h"
#include <ege/sys_edit.h>
Controller::Controller(int dimension_, int width_, int height_) {
    height = height_;
    width = width_;
    dimension = dimension_;
};
Controller::Controller() {
    height = 1000;
    width = 1000;
    dimension = 2;
}
void Controller::initialize() {
    initgraph(width, height);//初始绘图环境
    setinitmode(INIT_NOBORDER);//设置窗口无边框
    setbkcolor(WHITE);
    setrendermode(RENDER_MANUAL);//设置绘图模式
    setcolor(BLACK);
    setcaption("Kuroi画板");
    setlinewidth(5);
    setfont(height / 40, height / 85, "黑体");
    rectangle(width / 150, height / 150, width / 6, height - 5);//画出左边框（图形选择区域）
    rectangle(width / 6 + 5, 5, width - 5, height / 20 + 5);//画出提示区域
    rectangle(width / 80, width / 80, width / 6 - 5, height / 20 - 5);//画出“修改当前界面大小”按钮
    rectangle(width / 100, height / 4, width / 12, height / 4 + height / 30);//画出"画圆"按钮
    setlinestyle(DOTTED_LINE);//设置线型为虚线
    rectangle(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//画绘图区域
    setlinestyle(SOLID_LINE);
    outtextxy(width / 20, height / 20, "输入区");
    outtextxy((width / 6 + width) / 2, 8, "欢迎进入Kuroi画板!");
    outtextxy((width / 6 + width) / 2, height / 20 + 10, "绘图区");
    outtextxy(12, 12, "修改界面大小");
    outtextxy(width / 100 + width / 50, height / 4 + height / 600, "圆");
};
void Controller::cleardraw() {
    setviewport(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//设置区域为绘图区域
    clearviewport();//清空绘图区
};
void Controller::close() { closegraph(); }
void Controller::clearN() {
};
const int& Controller::getDimension() { return this->dimension; };
const int& Controller::getWidth() { return this->width; };
const int& Controller::getHeight() { return this->height; };
void Controller::setHeight(int& height_) { height = height_; };
void Controller::setWidth(int& width_) { width = width_; };
void Controller::setDimension(int& dimension_) { dimension = dimension_; };