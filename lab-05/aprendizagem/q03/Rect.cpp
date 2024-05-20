#include "Rect.h"
#include <iostream>

Rect::Rect() {
    a = Point();
    b = Point();
}

Rect::Rect(int ax, int ay, int bx, int by) {
    a = Point(ax, ay);
    b = Point(bx, by);
}

Rect::Rect(Point pa, Point pb) {
    a = pa;
    b = pb;
}

void Rect::Translate(int dx, int dy) {
    a.Translate(dx, dy);
    b.Translate(dx, dy);
}
