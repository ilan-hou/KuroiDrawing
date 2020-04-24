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
    initgraph(width, height);//��ʼ��ͼ����
    setinitmode(INIT_NOBORDER);//���ô����ޱ߿�
    setbkcolor(WHITE);
    setrendermode(RENDER_MANUAL);//���û�ͼģʽ
    setcolor(BLACK);
    setcaption("Kuroi����");
    setlinewidth(5);
    setfont(20, 10, "����");
    rectangle(5, 5, width / 6, height - 5);//������߿�ͼ��ѡ������
    rectangle(width / 6 + 5, 5, width - 5, height / 20 + 5);//������ʾ����
    setlinestyle(DOTTED_LINE);//��������Ϊ����
    rectangle(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//����ͼ����
    outtextxy((width / 6 + width) / 2, 8, "��ӭ����Kuroi����!");
    outtextxy((width / 6 + width) / 2, height / 20 + 10, "��ͼ��");
};
void Controller::allclear() { cleardevice(); };
void Controller::close() { closegraph(); }
const int& Controller::getDimension() { return this->dimension; };
const int& Controller::getWidth() { return this->width; };
const int& Controller::getHeight() { return this->height; };
void Controller::setHeight(int& height_) { height = height_; };
void Controller::setWidth(int& width_) { width = width_; };
void Controller::setDimension(int& dimension_) { dimension = dimension_; };