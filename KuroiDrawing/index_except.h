#pragma once
#include "Point.h"
#include "Rect.h"
#include "Circle.h"
#include "Triangle.h"
#include "Color.h"
void index_except() {
    Color c1(0, 2, 255);
    setviewport(800 / 6 + 5, 50, 795, 795);
    setfillcolor(WHITE);
    clearviewport();
    setfont(20, 10, "����");
    xyprintf(15, 15, "��������");
    xyprintf(0, 30, "------------------------------------------------------------------");
    xyprintf(20, 40, "Color�����c1(0,2,255)");
    xyprintf(20, 60, "ִ��c1[3](�����±귶Χ)");
    xyprintf(0, 80, "------------------------------------------------------------------");
    try {
        xyprintf(20, 95, "c1[0]=%d,c1[1]=%d,c1[2]=%d,c1[3]=%d", c1[0], c1[1], c1[2], c1[3]);
    }
    catch (const std::out_of_range & e) {
        xyprintf(20, 115, "�쳣��Ϣ��");
        xyprintf(20, 140, "%s", e.what());
    }
    setviewport(0, 0, 800, 800);
}