#pragma once
#include<vector>
#include"Closedshape.h"
using std::vector;
class Poly :public Closedshape {
public:
    Poly(vector<Point> iPoint_);
    Poly();
    vector<Point> getIpoint();
    static int& getNpoly();
    void draw(int op);
private: int nPoints;
       vector<Point>iPoint;
       static int nPolygons;
};