#pragma once
#include"graphics.h"
#include <string>
using std::string;
//�Զ����Button�࣬����ʵ�ֵ����ť����ͼ�Ĺ���
class Button {
public:
    Button(int x_, int y_, int height_, int width_, string text_);
    void textShow();//�����ť���ݵĺ���
    bool buttonMsg();//�����ж����ڰ�ť���״̬�ĺ���
private:
    int x, y, height, width;
    string text = { 0 };
    PIMAGE buttonImage = newimage();
    PIMAGE changeImage = newimage();
};