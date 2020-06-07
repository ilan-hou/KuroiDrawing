#include "Rect.h"
int nRectangles = 0;
bool Rect::isEqual(const Rect& r)const {
    if (this->width == r.getWidth() && this->height == r.getHeight()) {
        return true;
    }
    else { return false; }
};

bool Rect::operator >(const Rect& r)const { return this->getArea() > r.getArea(); };
bool Rect::operator <(const Rect& r) const { return this->getArea() < r.getArea(); };
bool Rect::operator >=(const Rect& r)const { return this->getArea() >= r.getArea(); };
bool Rect::operator <=(const Rect& r) const { return this->getArea() <= r.getArea(); };
bool Rect::operator ==(const Rect& r)const { return this->isEqual(r); };
bool Rect::operator !=(const Rect& r) const { return !(this->isEqual(r)); };
Rect& Rect::operator =(Rect& r) {
    this->point = r.getPoint();
    this->width = r.getWidth();
    this->height = r.getHeight();
    return *this;
};
int& Rect::operator [](const int index) {
    switch (index) {
    case 0: {return point.getX();}
          break;
    case 1: {return point.getY();}
          break;
    case 2: {return height;}
          break;
    case 3: {return width;}
          break;
    default: {throw std::out_of_range("Ë÷ÒýÖµ³¬³ö·¶Î§£¡");}
    }
};
Rect::Rect(Point& point_, int height_, int width_) {
    point = point_;
    height = height_;
    width = width_;
    ++nRectangles;
};
int& Rect::getNrect() {
    return nRectangles;
};
const int Rect::getArea()const { return width * height; };
Rect::Rect() {
    point = Point();
    height = width = 0;
    ++nRectangles;
}
Rect::Rect(Rect& rectangle) {
    this->width = rectangle.width;
    this->height = rectangle.height;
    this->point = rectangle.point;
    this->setBoaderColor(rectangle.getBoarderColor());
    this->setFillColor(rectangle.getFillColor());
    this->setLinewidth(rectangle.getLinewidth());
    this->setLinestyle(rectangle.getLinestyle());
    ++nRectangles;
}
Rect::~Rect() {
};
const int& Rect::getWidth() const { return this->width; };
const int& Rect::getHeight()const { return this->height; };
Point& Rect::getPoint() { return this->point; };
void Rect::setWidth(int& width_) { width = width_; };
void Rect::setHeight(int& height_) { height = height_; };
void Rect::setPoint(Point& point_) { point = point_; };
void Rect::draw(int op) {
    this->setDrawEnvir();
    if (0 == op) {
        rectangle(point.getX(), point.getY(), point.getX() + width, point.getY() + height);
    }
    if (1 == op) {
        bar(point.getX(), point.getY(), point.getX() + width, point.getY() + height);
    }
};