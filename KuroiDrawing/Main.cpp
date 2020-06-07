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
//���徲̬����
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
    editBox.setfont(20, 0, "����");
    editBox.move(controller.getWidth() / 100 + 10, controller.getHeight() / 12);
    editBox.visable(true);
    Button circleB(controller.getWidth() / 100, controller.getHeight() / 4, controller.getWidth() / 12,
        controller.getHeight() / 16, "Բ");//��Բ�İ�ť
    Button recB(controller.getWidth() / 100, controller.getHeight() / 4 + 60, controller.getWidth() / 12,
        controller.getHeight() / 16, "����");//�����εİ�ť
    Button triB(controller.getWidth() / 100, controller.getHeight() / 4 + 120, controller.getWidth() / 12,
        controller.getHeight() / 16, "������");//�������εİ�ť
    Button polB(controller.getWidth() / 100, controller.getHeight() / 4 + 180, controller.getWidth() / 12,
        controller.getHeight() / 16, "�����");//������εİ�ť
    Button readB(controller.getWidth() / 100, controller.getHeight() / 4 + 240, controller.getWidth() / 12,
        controller.getHeight() / 16, "����");//���ļ�����İ�ť
    Button testB(controller.getWidth() / 100, controller.getHeight() / 4 + 300, controller.getWidth() / 12,
        controller.getHeight() / 16, "��������");//������������صİ�ť
    Button indexB(controller.getWidth() / 100, controller.getHeight() / 4 + 340, controller.getWidth() / 12,
        controller.getHeight() / 16, "�쳣����");//������������صİ�ť
    //test();
    for (; is_run(); delay_fps(1000)) {
        setcolor(BLACK);
        controller.showNum();
        outtextxy(controller.getWidth() * 2 / 50 + 5, 31.5 * controller.getHeight() / 40, *to_char(Circle::getNcircles()));//���Բ����Ŀ
        outtextxy(controller.getWidth() * 7 / 50, 31.5 * controller.getHeight() / 40, *to_char(Rect::getNrect()));//������ε���Ŀ
        outtextxy(controller.getWidth() * 2 / 50 + 5, 34.5 * controller.getHeight() / 40, *to_char(Triangle::getNtri()));//��������ε���Ŀ
        outtextxy(controller.getWidth() * 7 / 50, 34.5 * controller.getHeight() / 40, *to_char(Poly::getNpoly()));//�������ε���Ŀ
        if (circleB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("�ɹ�����һ��Բ��");
            int x = 0, y = 0, radius = 0;
            char buf[50] = "0";//Ϊ����������һ��������
            editBox.gettext(50, buf);
            vector<int>temp = getInt(buf);
            //�����if else���ڷ�ֹ�û�û������͵����ť
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
                controller.notice("����Ĳ�����Ŀ���ԣ�");
            }
        }
        if (recB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("�ɹ�����һ�����Σ�");
            int x = 0, y = 0, width = 0, height = 0;
            char buf[50] = "0";//Ϊ����������һ��������
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
                controller.notice("����Ĳ�����Ŀ���ԣ�");
            }
        }
        if (triB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("�ɹ�����һ�������Σ�");
            int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
            char buf[50] = "0";//Ϊ����������һ��������
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
                controller.notice("����Ĳ�����Ŀ���ԣ�");
            }
        }
        if (polB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("�ɹ�����һ������Σ�");
            int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
            char buf[200] = "0";//Ϊ����������һ��������
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
                controller.notice("����Ĳ�����Ŀ���ԣ�");
            }
        }
        if (readB.buttonMsg()) {
            controller.clearNotice();
            controller.notice("����ɹ���");
            char buf[200] = "0";//Ϊ����������һ��������
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
                controller.notice("����Ĳ�����Ŀ���ԣ�");
            }
        }
        if (testB.buttonMsg()) {
            test();
        }
        if (indexB.buttonMsg()) { index_except(); }
    }
}