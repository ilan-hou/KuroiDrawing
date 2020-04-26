#include "Circle.h"
#include "Controller.h"
#include "Rectangle.h"
#include "Triangle.h"
#include"Line.h"
#include"ege_stream.h"
#include"egechar.h"
#include <ege/sys_edit.h>
int Rectangle::nRectangles = 0;
int Line::nLines = 0;
int Circle::nCircles = 0;
int  Triangle::nTriangles = 0;
int main() {
    Controller controller(2, 800, 800);
    controller.initialize();
    sys_edit editBox;
    editBox.create(true);
    editBox.size(controller.getWidth() / 8, 3 * controller.getHeight() / 20);
    editBox.setfont(20, 0, "黑体");
    editBox.move(controller.getWidth() / 100 + 10, controller.getHeight() / 12);
    editBox.visable(true);
    for (; is_run(); delay_fps(60)) {
        mouse_msg m = getmouse();
        //下面的if用于实现通过鼠标点击按钮改变窗口大小的功能
        if (m.x > 10 && m.y > 10 && m.x < controller.getWidth() / 6 - 5 && m.y < controller.getHeight() / 20 - 5 && m.is_left()) {
            setfillcolor(WHITE);
            bar(controller.getWidth() / 6 + 10, 6, controller.getWidth() - 10, controller.getHeight() / 20);//画一个白色填充矩形，用于清空提示区信息
            outtextxy((controller.getWidth() / 6 + controller.getWidth()) / 2, 8, "请输入两个整数");
            int height_{ 0 }, width_{ 0 };
            char buf[100]{ 0 };//为输入区定义一个缓冲区
            editBox.gettext(20, buf);
            vector<int>temp = getInt(buf);
            //下面的if else用于防止用户没有输入就点击按钮
            if (temp.size() != 0) {
                height_ = temp[0];
                width_ = temp[1];
                Controller controller(2, width_, height_);
                controller.initialize();
            }
            else {
                outtextxy((controller.getWidth() / 6 + controller.getWidth()) / 2, 8, "请先输入数字再点击按钮!");
            }
        }
        if ((m.x > controller.getWidth() / 100) && (m.y > controller.getHeight() / 4) && (m.x < controller.getWidth() / 12) && m.is_left())
        {
            setfillcolor(WHITE);
            bar(controller.getWidth() / 6 + 10, 6, controller.getWidth() - 10, controller.getHeight() / 20);//画一个白色填充矩形，用于清空提示区信息
            outtextxy((controller.getWidth() / 6 + controller.getWidth()) / 2, 8, "请输入3个数");
            int x, y, radius;
            char buf[100]{ 0 };//为输入区定义一个缓冲区
            editBox.gettext(20, buf);
            vector<int>temp = getInt(buf);
            //下面的if else用于防止用户没有输入就点击按钮
            if (temp.size() != 0) {
                x = temp[0];
                y = temp[1];
                radius = temp[2];
                Point point(x, y);
                Circle circle(point, radius);
                setviewport(controller.getWidth() / 6 + 5, controller.getHeight() / 20 + 10, controller.getWidth() - 5, controller.getHeight() - 5);
                circle.draw();
                setviewport(0, 0, controller.getWidth(), controller.getHeight());
            }
            else {
                outtextxy((controller.getWidth() / 6 + controller.getWidth()) / 2, 8, "请先输入数字再点击按钮!");
            }
        }
    }
}