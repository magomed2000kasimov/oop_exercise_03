//
// Created by magom on 20.10.2019.
//

#include "8gon.h"

point heptagon::center() const {
    double x,y;
    x = (a1.x + a2.x + a3.x + a4.x + a5.x + a6.x + a7.x + a8.x) / 8;
    y = (a1.y + a2.y + a3.y + a4.y + a5.y + a6.y + a7.y + a8.x) / 8;
    point p(x,y);
    return p;
}
void heptagon::print(std::ostream& os) const {
    os << "coordinate:\n"<<"{\n"<< a1 << '\n' << a2 << '\n' << a3 << '\n' << a4 << '\n' << a5 << '\n' << a6 << "\n" << a7 << "}\n";
}

double heptagon::square() const {
    return (-0.5) * ((a1.x*a2.y + a2.x*a3.y + a3.x*a4.y + a4.x*a5.y + a5.x*a6.y + a6.x*a7.y + a7.x*a8.y + a8.x*a1.y) - ( a1.y*a2.x + a2.y*a3.x + a3.y*a4.x + a4.y*a5.x + a5.y*a6.x + a6.y*a7.x + a7.y*a8.x + a8.y*a1.x));
}

heptagon::heptagon(point p1, point p2, point p3, point p4, point p5, point p6, point p7,point p8) {
    a1 = p1;
    a2 = p2;
    a3 = p3;
    a4 = p4;
    a5 = p5;
    a6 = p6;
    a7 = p7;
    a8 = p8;
}
