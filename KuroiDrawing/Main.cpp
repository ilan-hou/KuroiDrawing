#include "Circle.h"
#include "Controller.h"
#include "Rectangle.h"
#include "Triangle.h"
#include"Line.h"
int Rectangle::nRectangles = 0;
int Line::nLines = 0;
int Circle::nCircles = 0;
int  Triangle::nTriangles = 0;
int main() {
    //≤‚ ‘¥˙¬Î
    Controller controller(2, 800, 800);
    controller.initialize();
    Point a(50, 50);
    //Circle circle(a, 20.0);
    for (; is_run(); delay_fps(60)) {
        //circle.draw();
    }
}