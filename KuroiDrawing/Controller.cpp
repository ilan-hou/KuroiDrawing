#include "Controller.h"
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
};
void Controller::allclear() { cleardevice(); };
void Controller::close() { closegraph(); }
const int& Controller::getDimension() { return this->dimension; };
const int& Controller::getWidth() { return this->width; };
const int& Controller::getHeight() { return this->height; };
void Controller::setHeight(int& height_) { height = height_; };
void Controller::setWidth(int& width_) { width = width_; };
void Controller::setDimension(int& dimension_) { dimension = dimension_; };