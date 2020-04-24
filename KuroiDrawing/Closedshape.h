#pragma once
#include"Color.h"
#include"Point.h"
//���з��ͼ�εĻ��࣬�����˱߽���ɫ�������ɫ������Ա
class Closedshape {
public:
    virtual void draw() = 0;//���麯����ʹ�������override�ú���
    Closedshape(Color fill_color_, Color boarder_color_);
    Closedshape();
    void setLinewidth(const int linewidth_);
    void setFillColor(const Color& fill_color_);
    void setBoaderColor(const Color& boarder_color_);
    void setLinestyle(const int linestyle_);
    void setDrawEnvir();//���û�ͼʱ�ĸ��ֲ����ĺ���
    const int& getLinewidth();
    Color& getFillColor();
    Color& getBoarderColor();
    const int& getLinestyle();
    const char* to_char(int& num);//����ʾ���ڶ�����Ŀ�ľ�̬����ת��Ϊchar����ĺ���
private:  Color fill_color, boarder_color;
       int linewidth = 1, linestyle = SOLID_LINE;
};