#pragma once
#include"graphics.h"
#include <string>
using std::string;
//自定义的Button类，用于实现点击按钮来画图的功能
class Button {
public:
    Button(int x_, int y_, int height_, int width_, string text_);
    void textShow();//输出按钮内容的函数
    bool buttonMsg();//用于判断现在按钮点击状态的函数
private:
    int x, y, height, width;
    string text = { 0 };
    PIMAGE buttonImage = newimage();
    PIMAGE changeImage = newimage();
};