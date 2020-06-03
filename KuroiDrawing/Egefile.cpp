#include "Egefile.h"
fstream& Egefile::getFp() { return fp; };
color_t Egefile::str2color(string s) {
    if ("red" == s) { return(RED); }
    else if ("blue" == s) { return(BLUE); }
    else if ("green" == s) { return(GREEN); }
    else if ("black" == s) { return(BLACK); }
    else if ("cyan" == s) { return(CYAN); }
    else if ("brown" == s) { return(BROWN); }
    else if ("white" == s) { return(WHITE); }
    else if ("yellow" == s) { return(YELLOW); }
    else if ("pink" == s) { return(EGERGB(255, 192, 203)); }
    else if ("purple" == s) { return(EGERGB(128, 0, 128)); }
};
string Egefile::color2str(color_t c) {
    if (RED == c) { return "red"; }
    else if (BLUE == c) { return "blue"; }
    else if (GREEN == c) { return "green"; }
    else if (BLACK == c) { return "black"; }
    else if (CYAN == c) { return "cyan"; }
    else if (BROWN == c) { return "brown"; }
    else if (WHITE == c) { return "white"; }
    else if (YELLOW == c) { return "yellow"; }
    else if (EGERGB(255, 192, 203) == c) { return "pink"; }
    else if (EGERGB(128, 0, 128) == c) { return "purple"; }
};
void Egefile::read(int num) {
    fp.open(R"(.\figure files)", ios::in);
    for (int i = 0;i < num;i++) {
        int option;
        fp >> option;
        switch (option) {
        case 1: {
            int x, y, radius;
            bool isFilled;
            string color;
            fp >> x >> y >> radius;
            Point p(x, y);
            Circle c(p, radius);
            fp >> color;
            fp >> isFilled;
            if (isFilled) {
                c.setBoaderColor(Color(str2color(color)));
                c.setFillColor(Color(str2color(color)));
            }
            else { c.setBoaderColor(Color(str2color(color))); }
            setviewport(800 / 6 + 5, 800 / 20 + 10, 800 - 5, 800 - 5);
            c.draw(isFilled);
            setviewport(0, 0, 800, 800);
        }
              break;
        case 2: {
            int x1, y1, x2, y2, x3, y3;
            fp >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            Point p1(x1, y1), p2(x2, y2), p3(x3, y3);
            array<Point, 3>iP;
            iP[0] = p1;
            iP[1] = p2;
            iP[2] = p3;
            Triangle tri(iP);
            bool isFilled;
            string color;
            fp >> color;
            fp >> isFilled;
            if (isFilled) {
                tri.setBoaderColor(Color(str2color(color)));
                tri.setFillColor(Color(str2color(color)));
            }
            else { tri.setBoaderColor(Color(str2color(color))); }
            setviewport(800 / 6 + 5, 800 / 20 + 10, 800 - 5, 800 - 5);
            tri.draw(isFilled);
            setviewport(0, 0, 800, 800);
        }
              break;
        case 3: {
            int x, y, height, width;
            fp >> x >> y >> height >> width;
            Point p(x, y);
            Rect r(p, height, width);
            string color;
            bool isFilled;
            fp >> color;
            fp >> isFilled;
            if (isFilled) {
                r.setBoaderColor(Color(str2color(color)));
                r.setFillColor(Color(str2color(color)));
            }
            else { r.setBoaderColor(Color(str2color(color))); }
            setviewport(800 / 6 + 5, 800 / 20 + 10, 800 - 5, 800 - 5);
            r.draw(isFilled);
            setviewport(0, 0, 800, 800);
        }
              break;
        case 4: {
            int num;
            fp >> num;
            vector<Point> iP;
            for (int i = 0;i < num;i++) {
                int x, y;
                fp >> x >> y;
                Point p(x, y);
                iP.push_back(p);
            }
            Poly p(iP);
            string color;
            bool isFilled;
            fp >> color;
            fp >> isFilled;
            if (isFilled) {
                p.setBoaderColor(Color(str2color(color)));
                p.setFillColor(Color(str2color(color)));
            }
            else { p.setBoaderColor(Color(str2color(color))); }
            setviewport(800 / 6 + 5, 800 / 20 + 10, 800 - 5, 800 - 5);
            p.draw(isFilled);
            setviewport(0, 0, 800, 800);
        }
              break;
        }
    }
    fp.close();
};
void Egefile::write(Circle& c) {
    fp.open(R"(.\figure files)", ios::app);
    fp << "\n" << 1 << "\n";
    fp << c.getCenterPoint().getX() << " " << c.getCenterPoint().getY() << " " << c.getRadius() << "\n";
    fp << color2str(c.getBoarderColor().getColor()) << " ";
    if (WHITE == c.getFillColor().getColor()) { fp << 0; }
    else { fp << 1; }
    fp.close();
};
void Egefile::write(Triangle& tri) {
    fp.open(R"(.\figure files)", ios::app);
    fp << "\n" << 2 << "\n";
    fp << tri.getAllPoint()[0].getX() << " " << tri.getAllPoint()[0].getY() << " " << tri.getAllPoint()[1].getX()
        << " " << tri.getAllPoint()[1].getY() << " " << tri.getAllPoint()[2].getX() << " " << tri.getAllPoint()[2].getY() << "\n";
    fp << color2str(tri.getBoarderColor().getColor()) << " ";
    if (WHITE == tri.getFillColor().getColor()) { fp << 0; }
    else { fp << 1; }
    fp.close();
};
void Egefile::write(Rect& r) {
    fp.open(R"(.\figure files)", ios::app);
    fp << "\n" << 3 << "\n";
    fp << r.getPoint().getX() << " " << r.getPoint().getY() << " " << r.getHeight() << " " << r.getWidth() << "\n";
    fp << color2str(r.getBoarderColor().getColor()) << " ";
    if (WHITE == r.getFillColor().getColor()) { fp << 0; }
    else { fp << 1; }
    fp.close();
};
void Egefile::write(Poly& p) {
    fp.open(R"(.\figure files)", ios::app);
    fp << "\n" << 4 << "\n";
    fp << p.getIpoint().size() << "\n";
    for (int i = 0;i < p.getIpoint().size();i++) {
        if (i < p.getIpoint().size() - 1) {
            fp << p.getIpoint()[i].getX() << " " << p.getIpoint()[i].getX() << " ";
        }
        else { fp << p.getIpoint()[i].getX() << " " << p.getIpoint()[i].getX() << "\n"; }
    }
    fp << color2str(p.getBoarderColor().getColor()) << " ";
    if (WHITE == p.getFillColor().getColor()) { fp << 0; }
    else { fp << 1; }
    fp.close();
};