#include "Controller.h"
Controller::Controller(int dimension_, int width_, int height_) {
    height = height_;
    width = width_;
    dimension = dimension_;
};
void Controller::setDrawV() {
    setviewport(width / 6 + 5, height / 20 + 10, width - 5, height - 5);
}
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
    setlinestyle(DOTTED_LINE);//设置线型为虚线
    rectangle(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//画绘图区域
    setlinestyle(SOLID_LINE);
    outtextxy(width / 20, height / 20, "输入区");
    outtextxy((width / 6 + width) / 2, 8, "欢迎进入Kuroi画板!");
    outtextxy((width / 6 + width) / 2, height / 20 + 10, "绘图区");
};
void Controller::cleardraw() {
    setviewport(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//设置区域为绘图区域
    setfillcolor(WHITE);
    clearviewport();//清空绘图区
};
void Controller::close() { closegraph(); }
void Controller::clearNotice() {
    setviewport(width / 6 + 10, 6, width - 10, height / 20);
    setfillcolor(WHITE);
    clearviewport();
};
void Controller::clearNum() {
    setviewport(width / 150 + 5, height - height / 10, width / 6 - 5, height - height / 4);
    setfillcolor(WHITE);
    clearviewport();
};
const int& Controller::getDimension() { return this->dimension; };
const int& Controller::getWidth() { return this->width; };
const int& Controller::getHeight() { return this->height; };
void Controller::setHeight(int& height_) { height = height_; };
void Controller::setWidth(int& width_) { width = width_; };
void Controller::setDimension(int& dimension_) { dimension = dimension_; };
void  Controller::showNum() {
    rectangle(width / 150 + 5, height - height / 10, width / 6 - 5, height - height / 4);//画出显示各个图形数目的区域
    line(width * 13 / 150, height - height / 10, width * 13 / 150, height - height / 4);//分隔显示数目的区域
    line(width / 150 + 5, 33 * height / 40, width / 6 - 5, 33 * height / 40);//分隔显示数目的区域
    setfont(20, 10, "黑体");
    outtextxy(width * 1 / 50, 31 * height / 40 - 10, "圆");
    outtextxy(width * 1 / 50, 33.5 * height / 40, "三角形");
    outtextxy(width * 1 / 10, 33.5 * height / 40, "多边形");
    outtextxy(width * 1 / 10, 31 * height / 40 - 10, "矩形");
};
void Controller::notice(const char* c) {
    setfont(height / 40, height / 85, "黑体");
    outtextxy((width / 6 + width) / 3, 8, c);
};