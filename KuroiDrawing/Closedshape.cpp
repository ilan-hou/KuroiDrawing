#include "Closedshape.h"
Closedshape::Closedshape(Color fill_color_, Color boarder_color_) :fill_color{ fill_color_ }, boarder_color{ boarder_color_ } {};
Closedshape::Closedshape() {
    fill_color = Color();
    boarder_color = Color();
};
const Color& Closedshape::getFillColor() { return this->fill_color; };
const Color& Closedshape::getBoarderColor() { return this->boarder_color; };
void Closedshape::setFillColor(const Color& fill_color_) { fill_color = fill_color_; };
void Closedshape::setBoaderColor(const Color& boarder_color_) { boarder_color = boarder_color_; };