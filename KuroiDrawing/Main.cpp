#include "Circle.h"
#include "Controller.h"
#include "Rect.h"
#include "Triangle.h"
#include "Poly.h"
#include"Line.h"
#include"egechar.h"
#include "button.h"
#include "Egefile.h"
#include "test_overload.h"
#include "index_except.h"
//定义静态变量
int Rect::nRectangles = 0;
int Line::nLines = 0;
int Circle::nCircles = 0;
int  Triangle::nTriangles = 0;
int  Poly::nPolygons = 0;
int main() {
    Egefile efile;
    Controller controller(2, 800, 800);
    controller.initialize();
    sys_edit editBox;
    editBox.create(true);
    editBox.size(controller.getWidth() / 8, 3 * controller.getHeight() / 20);
    editBox.setfont(20, 0, "黑体");
    editBox.move(controller.getWidth() / 100 + 10, controller.getHeight() / 12);
    editBox.visable(true);
    Button circleB(controller.getWidth() / 100, controller.getHeight() / 4, controller.getWidth() / 12,
        controller.getHeight() / 16, "圆");//画圆的按钮
    Button recB(controller.getWidth() / 100, controller.getHeight() / 4 + 60, controller.getWidth() / 12,
        controller.getHeight() / 16, "矩形");//画矩形的按钮
    Button triB(controller.getWidth() / 100, controller.getHeight() / 4 + 120, controller.getWidth() / 12,
        controller.getHeight() / 16, "三角形");//画三角形的按钮
    Button polB(controller.getWidth() / 100, controller.getHeight() / 4 + 180, controller.getWidth() / 12,
        controller.getHeight() / 16, "多边形");//画多边形的按钮
    Button readB(controller.getWidth() / 100, controller.getHeight() / 4 + 240, controller.getWidth() / 12,
        controller.getHeight() / 16, "读入");//从文件输入的按钮
    Button testB(controller.getWidth() / 100, controller.getHeight() / 4 + 300, controller.getWidth() / 12,
        controller.getHeight() / 16, "测试重载");//测试运算符重载的按钮
    Button indexB(controller.getWidth() / 100, controller.getHeight() / 4 + 340, controller.getWidth() / 12,
        controller.getHeight() / 16, "异常处理");//测试运算符重载的按钮
    //test();
    for (; is_run(); delay_fps(1000)) {
        setcolor(BLACK);
        controller.showNum();
        outtextxy(controller.getWidth() * 2 / 50 + 5, 31.5 * controller.getHeight() / 40, *to_char(Circle::getNcircles()));//输出圆的数目
        outtextxy(controller.getWidth() * 7 / 50, 31.5 * controller.getHeight() / 40, *to_char(Rect::getNrect()));//输出矩形的数目
        outtextxy(controller.getWidth() * 2 / 50 + 5, 34.5 * controller.getHeight() / 40, *to_char(Triangle::getNtri()));//输出三角形的数目
        outtextxy(controller.getWidth() * 7 / 50, 34.5 * controller.getHeight() / 40, *to_char(Poly::getNpoly()));//输出多边形的数目
        if (circleB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("成功画了一个圆！");
            int x = 0, y = 0, radius = 0;
            char buf[50] = "0";//为输入区定义一个缓冲区
            editBox.gettext(50, buf);
            vector<int>temp = getInt(buf);
            //下面的if else用于防止用户没有输入就点击按钮
            if (3 == temp.size()) {
                controller.clearNum();
                x = temp[0];
                y = temp[1];
                radius = temp[2];
                Point point(x, y);
                Circle circle(point, radius);
                efile.write(circle);
                controller.setDrawV();
                circle.draw(0);
                setviewport(0, 0, controller.getWidth(), controller.getHeight());
            }

            else {
                temp.clear();
                controller.clearNotice();
                controller.notice("输入的参数数目不对！");
            }
        }
        if (recB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("成功画了一个矩形！");
            int x = 0, y = 0, width = 0, height = 0;
            char buf[50] = "0";//为输入区定义一个缓冲区
            editBox.gettext(50, buf);
            vector<int>temp = getInt(buf);
            if (4 == temp.size()) {
                controller.clearNum();
                x = temp[0];
                y = temp[1];
                width = temp[2];
                height = temp[3];
                Point point(x, y);
                Rect rect(point, height, width);
                efile.write(rect);
                controller.setDrawV();
                rect.draw(0);
                setviewport(0, 0, controller.getWidth(), controller.getHeight());
            }
            else {
                temp.clear();
                controller.clearNotice();
                controller.notice("输入的参数数目不对！");
            }
        }
        if (triB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("成功画了一个三角形！");
            int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
            char buf[50] = "0";//为输入区定义一个缓冲区
            editBox.gettext(50, buf);
            vector<int>temp = getInt(buf);
            if (6 == temp.size()) {
                controller.clearNum();
                int  p[10];
                for (int i = 0;i < temp.size();i++) {
                    p[i] = temp[i];
                }
                Point point1(p[0], p[1]);
                Point point2(p[2], p[3]);
                Point point3(p[4], p[5]);
                std::array<Point, 3> iPoint_ = { point1,point2,point3 };
                Triangle tri(iPoint_);
                efile.write(tri);
                controller.setDrawV();
                tri.draw(0);
                setviewport(0, 0, controller.getWidth(), controller.getHeight());
            }
            else {
                temp.clear();
                controller.clearNotice();
                controller.notice("输入的参数数目不对！");
            }
        }
        if (polB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("成功画了一个多边形！");
            int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
            char buf[200] = "0";//为输入区定义一个缓冲区
            editBox.gettext(200, buf);
            vector<int>temp = getInt(buf);
            if (temp.size() >= 6 && temp.size() % 2 == 0) {
                controller.clearNum();
                vector<Point> iP;
                for (int i = 0;i < temp.size() / 2;i++) {
                    Point p(temp[2 * i], temp[2 * i + 1]);
                    iP.push_back(p);
                }
                Poly polygon(iP);
                efile.write(polygon);
                controller.setDrawV();
                polygon.draw(0);
                setviewport(0, 0, controller.getWidth(), controller.getHeight());
            }
            else {
                temp.clear();
                controller.clearNotice();
                controller.notice("输入的参数数目不对！");
            }
        }
        if (readB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("读入成功！");
            char buf[200] = "0";//为输入区定义一个缓冲区
            editBox.gettext(200, buf);
            vector<int>temp = getInt(buf);
            controller.clearNum();
            efile.read(1);
            if (1 == temp.size()) {
                efile.read(temp[0]);
            }
            else {
                temp.clear();
                controller.clearNotice();
                controller.notice("输入的参数数目不对！");
            }
        }
        if (testB.buttonMsg()) {
            test();
        }
        if (indexB.buttonMsg()) { index_except(); }
    }
}