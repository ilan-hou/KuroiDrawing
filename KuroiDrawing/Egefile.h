#pragma once
#include<string>
#include<vector>
#include<array>
#include<fstream>
#include<filesystem>
#include "Circle.h"
#include "Rect.h"
#include "Triangle.h"
#include "Poly.h"
#include "Point.h"
#include "Controller.h"
#include "Color.h"
using std::array;
using std::vector;
using std::string;
using std::fstream;
using std::ios;
class Egefile {
public:
    Egefile() = default;
    fstream& getFp();
    void read(int num);//num为读入图形的数目
    void write(Circle& c);
    void write(Triangle& tri);
    void write(Rect& r);
    void write(Poly& p);
    color_t str2color(string s);
    string color2str(color_t c);
private:
    std::fstream fp;
};