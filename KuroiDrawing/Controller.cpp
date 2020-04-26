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
    initgraph(width, height);//��ʼ��ͼ����
    setinitmode(INIT_NOBORDER);//���ô����ޱ߿�
    setbkcolor(WHITE);
    setrendermode(RENDER_MANUAL);//���û�ͼģʽ
    setcolor(BLACK);
    setcaption("Kuroi����");
    setlinewidth(5);
    setfont(height / 40, height / 85, "����");
    rectangle(width / 150, height / 150, width / 6, height - 5);//������߿�ͼ��ѡ������
    rectangle(width / 6 + 5, 5, width - 5, height / 20 + 5);//������ʾ����
    rectangle(width / 80, width / 80, width / 6 - 5, height / 20 - 5);//�������޸ĵ�ǰ�����С����ť
    rectangle(width / 100, height / 4, width / 12, height / 4 + height / 30);//����"��Բ"��ť
    setlinestyle(DOTTED_LINE);//��������Ϊ����
    rectangle(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//����ͼ����
    setlinestyle(SOLID_LINE);
    outtextxy(width / 20, height / 20, "������");
    outtextxy((width / 6 + width) / 2, 8, "��ӭ����Kuroi����!");
    outtextxy((width / 6 + width) / 2, height / 20 + 10, "��ͼ��");
    outtextxy(12, 12, "�޸Ľ����С");
    outtextxy(width / 100 + width / 50, height / 4 + height / 600, "Բ");
};
void Controller::cleardraw() {
    setviewport(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//��������Ϊ��ͼ����
    clearviewport();//��ջ�ͼ��
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