#pragma once
#include "Point.h"
#include "Rect.h"
#include "Circle.h"
#include "Triangle.h"
#include "Color.h"
//测试运算符重载功能并显示结果的代码
void test() {
    Color c1(0, 2, 255), c2(50, 6, 244);
    Point  p1(200, 200), p2(200, 200), p3(100, 100), p4(120, 345), p5(50, 650), p6;
    p6 = p1 + p3;
    std::array < Point, 3 > iPoint1 = { p1,p4,p5 }, iPoint2 = { p3,p4,p5 };
    Circle cir1(p1, 100), cir2(p2, 200);
    Rect r1(p1, 100, 200), r2(p3, 300, 100);
    Triangle t1(iPoint1), t2(iPoint2);
    setviewport(800 / 6 + 5, 50, 795, 795);
    setfillcolor(WHITE);
    clearviewport();
    setfont(20, 10, "黑体");
    xyprintf(15, 15, "测试数据");
    xyprintf(0, 30, "------------------------------------------------------------------");
    xyprintf(20, 40, "Color类对象：c1(0,2,255) c2(50,6,244)");
    xyprintf(10, 60, "Point类对象：p1(200, 200) p2(200, 200) p3(100, 100)  p4(120, 345)  p5(50, 650)");
    xyprintf(20, 80, "Circle类对象：cir1(200,200,100) cir2(200,200,200)");
    xyprintf(20, 100, "Rect类对象：r1(长100，宽200)  r2(长300，宽100)");
    xyprintf(20, 120, "Triangle类对象： t1的顶点坐标: (200,200),(120,345),(50,650)");
    xyprintf(20, 140, "t2的顶点坐标: (100,100),(120,345),(50,650)");
    xyprintf(0, 155, "------------------------------------------------------------------");
    xyprintf(15, 170, "测试结果(0代表false，1代表true)");
    xyprintf(0, 185, "------------------------------------------------------------------");
    xyprintf(20, 200, "p1==p2: %d", (p1 == p2));
    xyprintf(20, 220, "p1!=p3: %d", (p1 != p3));
    xyprintf(20, 240, "p1+p3=(%d,%d)", p6.getX(), p6.getY());
    xyprintf(20, 260, "p4[0]=%d,p4[1]=%d", p4[0], p4[1]);
    xyprintf(20, 280, "c1[0]=%d,c1[1]=%d,c1[2]=%d", c1[0], c1[1], c1[2]);
    Color c7 = ++c1;
    xyprintf(20, 300, "++c1:(%d,%d,%d)", c7.getR(), c7.getG(), c7.getB());
    Color c8 = --c1;
    xyprintf(20, 320, "--c1:(%d,%d,%d)", c8.getR(), c8.getG(), c8.getB());
    xyprintf(20, 340, "c1==c2:%d", (c1 == c2));
    xyprintf(20, 360, "c1!=c2:%d", (c1 != c2));
    xyprintf(20, 380, "cir1>cir2:%d", (cir1 > cir2));
    xyprintf(20, 400, "cir1<cir2:%d", (cir1 < cir2));
    xyprintf(20, 420, "cir1>=cir2:%d", (cir1 >= cir2));
    xyprintf(20, 440, "cir1<=cir2:%d", (cir1 <= cir2));
    xyprintf(20, 460, "cir1==cir2:%d", (cir1 == cir2));
    xyprintf(20, 480, "cir1!=cir2:%d", (cir1 != cir2));
    xyprintf(20, 500, "cir1[0]:%d,cir1[1]:%d,cir1[2]:%d", cir1[0], cir1[1], cir1[2]);
    Circle cir3;
    cir3 = cir2;
    xyprintf(20, 520, "cir3=cir2,cir3[0]:%d,cir3[1]:%d,cir3[2]:%d", cir3[0], cir3[1], cir3[2]);
    xyprintf(20, 540, "r1==r2:%d", (r1 == r2));
    xyprintf(20, 560, "r1!=r2:%d", (r1 != r2));
    xyprintf(20, 580, "r1>r2:%d", (r1 > r2));
    xyprintf(20, 600, "r1<r2:%d", (r1 < r2));
    xyprintf(20, 620, "r1>=r2:%d", (r1 >= r2));
    xyprintf(20, 640, "r1<=r2:%d", (r1 <= r2));
    xyprintf(20, 660, "r1[0]:%d,r1[1]:%d,r1[2]:%d,r1[3]:%d", r1[0], r1[1], r1[2], r1[3]);
    Rect r3;
    r3 = r2;
    xyprintf(20, 680, "r3=r2,r3[0]:%d,r3[1]:%d,r3[2]:%d,r3[2]:%d", r3[0], r3[1], r3[2], r3[3]);
    xyprintf(280, 200, "t1==t2:%d", (t1 == t2));
    xyprintf(280, 220, "t1!=t2:%d", (t1 != t2));
    xyprintf(280, 240, "t1>t2:%d", (t1 > t2));
    xyprintf(280, 260, "t1<t2:%d", (t1 < t2));
    xyprintf(280, 280, "t1>=t2:%d", (t1 >= t2));
    xyprintf(280, 300, "t1<=t2:%d", (t1 <= t2));
    xyprintf(20, 700, "t1[0]:%d,t1[1]:%d,t1[2]:%d,t1[3]:%d,t1[4]:%d,t1[5]:%d", t1[0], t1[1], t1[2], t1[3], t1[4], t1[5]);
    setviewport(0, 0, 800, 800);
}
