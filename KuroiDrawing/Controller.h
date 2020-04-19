#pragma once
#include "graphics.h"
class Controller {
public:
    Controller(int dimension_, int width_, int height_);
    Controller();
    void initialize();
    void allclear();
    void close();
    const int& getDimension();
    const int& getWidth();
    const int& getHeight();
    void setHeight(int& height_);
    void setWidth(int& width_);
    void setDimension(int& dimension_);
private: int dimension, width, height;//dimensionΪ��ͼ���ڵ�ά�ȣ��ж�ά��ά����ά��
};