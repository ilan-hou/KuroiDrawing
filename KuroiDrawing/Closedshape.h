#pragma once
#include"Color.h"
#include"Point.h"
//���з��ͼ�εĻ��࣬�����˱߽���ɫ�������ɫ������Ա
class Closedshape {
public:
    virtual void draw(int op) = 0;//���麯����ʹ�������override�ú���
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
private:  Color fill_color = WHITE, boarder_color = BLACK;
       int linewidth = 1, linestyle = SOLID_LINE;
};