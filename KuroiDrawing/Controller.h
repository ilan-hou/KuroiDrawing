#pragma once
#include "graphics.h"
#include <ege/sys_edit.h>
class Controller {
public:
    Controller(int dimension_, int width_, int height_);
    Controller();
    void initialize();
    void cleardraw();
    void clearNotice();//����ˢ�������
    void close();
    void notice(const char* c);
    const int& getDimension();
    const int& getWidth();
    const int& getHeight();
    void setHeight(int& height_);
    void setWidth(int& width_);
    void setDimension(int& dimension_);
    void clearNum();//�����ʾͼ����Ŀ��Ϣ������
    void showNum();//��ʾͼ����Ŀ�ĺ���
    void setDrawV();//���û�ͼ����ĺ���
private: int dimension, width, height;//dimensionΪ��ͼ���ڵ�ά�ȣ��ж�ά��ά����ά��
};