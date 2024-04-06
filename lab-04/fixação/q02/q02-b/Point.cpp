#include "Point.h"

inline int Point::GetX() { return x; }
inline int Point::GetY() { return y; }

void Point::MoveTo(int px, int py)
{
  x = px;
  y = py;
}

void Point::Translate(int dx, int dy)
{
  x += dx;
  y += dy;
}