#pragma once
#include"Color.h"
#include"Point.h"
//���з��ͼ�εĻ��࣬�����˱߽���ɫ�������ɫ������Ա
class Closedshape {
public:
    Closedshape(Color fill_color_, Color boarder_color_);
    Closedshape();
    void setFillColor(const Color& fill_color_);
    void setBoaderColor(const Color& boarder_color_);
    const Color& getFillColor();
    const Color& getBoarderColor();
private:  Color fill_color, boarder_color;
};