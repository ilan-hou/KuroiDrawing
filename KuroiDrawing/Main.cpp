#include "Circle.h"
#include "Controller.h"
#include "Rectangle.h"
#include "Triangle.h"
int main() {
    //���Դ���
    while (is_run) {
        Controller controller(2, 1000, 1000);
        controller.initialize();
        Circle circle(Point(50.0, 50.0), 20.0);
        circle.setBoaderColor(Color(BLUE));
    }
}