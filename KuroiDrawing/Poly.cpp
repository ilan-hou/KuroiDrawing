#include "Poly.h"
vector<Point> Poly::getIpoint() { return this->iPoint; };
void Poly::draw(int op) {
    this->setDrawEnvir();
    int point[200];
    for (int i = 0;i < iPoint.size();i++) {
        point[2 * i] = iPoint[i].getX();
        point[2 * i + 1] = iPoint[i].getY();
    }
    point[2 * iPoint.size()] = iPoint[0].getX();
    point[2 * iPoint.size() + 1] = iPoint[0].getY();
    if (0 == op) { drawpoly(iPoint.size() + 1, point); }
    if (1 == op) { fillpoly(iPoint.size() + 1, point); }
};
Poly::Poly(vector<Point> iPoint_) {
    iPoint = iPoint_;
};
int& Poly::getNpoly() { return nPolygons; };
Poly::Poly() {
    Point p(0, 0);
    iPoint.push_back(p);
};