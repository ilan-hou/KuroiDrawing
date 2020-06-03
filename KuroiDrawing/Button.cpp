#include "Button.h"
Button::Button(int x_, int y_, int width_, int height_, string text_) {
    this->x = x_;
    this->y = y_;
    this->height = height_;
    this->width = width_;
    this->text = text_;
    getimage(buttonImage, R"(.\button.png)");
    getimage(changeImage, R"(.\change.png)");
    putimage(x, y, width, height, buttonImage, 0, 0, 100, 40);
    textShow();
}
void Button::textShow() {
    int showX, showY;
    showX = x + width / 10;
    showY = y + height / 4;
    char buf[20] = { 0 };
    for (int i = 0;i < text.length();i++) {
        buf[i] = text[i];
    }
    setbkmode(TRANSPARENT);
    setfont(30, 10, "ºÚÌå");
    outtextxy(showX, showY, buf);
}
bool Button::buttonMsg() {
    mouse_msg m = { 0 };
    m = getmouse();
    if ((m.x >= x) && (m.x <= x + width) && (m.y >= y) && (m.y <= y + height)) {
        putimage(x, y, width, height, changeImage, 0, 0, 100, 40);
        textShow();
        if (m.is_down()) {
            return true;
        }
        else { return false; }
    }
    else {
        putimage(x, y, width, height, buttonImage, 0, 0, 100, 40);
        textShow();
        return false;
    }
}