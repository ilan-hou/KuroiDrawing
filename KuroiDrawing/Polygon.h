#pragma once
#include<vector>
#include"Closedshape.h"
using std::vector;
class Polygon :public Closedshape {
public:
    const int& getNpoint();
    vector<Point>& getIpoint();
private: int nPoints;
       vector<Point>iPoint;
       static int nPolygons;
};