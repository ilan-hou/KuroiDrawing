#include "Closedshape.h"
#include<string>
Closedshape::Closedshape(Color fill_color_, Color boarder_color_) :fill_color{ fill_color_ }, boarder_color{ boarder_color_ } {};
Closedshape::Closedshape() {
    fill_color = Color();
    boarder_color = Color();
};
Color& Closedshape::getFillColor() { return this->fill_color; };
Color& Closedshape::getBoarderColor() { return this->boarder_color; };
const int& Closedshape::getLinewidth() { return this->linewidth; };
const int& Closedshape::getLinestyle() { return this->linestyle; };
void Closedshape::setFillColor(const Color& fill_color_) { fill_color = fill_color_; };
void Closedshape::setBoaderColor(const Color& boarder_color_) { boarder_color = boarder_color_; };
void Closedshape::setLinewidth(const int linewidth_) { linewidth = linewidth_; };
void Closedshape::setLinestyle(const int linestyle_) { linestyle = linestyle_; };
void Closedshape::setDrawEnvir() {
    setlinewidth(this->getLinewidth());
    setlinestyle(this->getLinestyle());
    setcolor(this->getBoarderColor().getColor());
    setfillcolor(this->getFillColor().getColor());
}