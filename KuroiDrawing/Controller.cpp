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
    setlinestyle(DOTTED_LINE);//��������Ϊ����
    rectangle(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//����ͼ����
    setlinestyle(SOLID_LINE);
    outtextxy(width / 20, height / 20, "������");
    outtextxy((width / 6 + width) / 2, 8, "��ӭ����Kuroi����!");
    outtextxy((width / 6 + width) / 2, height / 20 + 10, "��ͼ��");
};
void Controller::cleardraw() {
    setviewport(width / 6 + 5, height / 20 + 10, width - 5, height - 5);//��������Ϊ��ͼ����
    setfillcolor(WHITE);
    clearviewport();//��ջ�ͼ��
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
    rectangle(width / 150 + 5, height - height / 10, width / 6 - 5, height - height / 4);//������ʾ����ͼ����Ŀ������
    line(width * 13 / 150, height - height / 10, width * 13 / 150, height - height / 4);//�ָ���ʾ��Ŀ������
    line(width / 150 + 5, 33 * height / 40, width / 6 - 5, 33 * height / 40);//�ָ���ʾ��Ŀ������
    setfont(20, 10, "����");
    outtextxy(width * 1 / 50, 31 * height / 40 - 10, "Բ");
    outtextxy(width * 1 / 50, 33.5 * height / 40, "������");
    outtextxy(width * 1 / 10, 33.5 * height / 40, "�����");
    outtextxy(width * 1 / 10, 31 * height / 40 - 10, "����");
};
void Controller::notice(const char* c) {
    setfont(height / 40, height / 85, "����");
    outtextxy((width / 6 + width) / 3, 8, c);
};