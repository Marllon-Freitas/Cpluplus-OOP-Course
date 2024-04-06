#include "Point.h"

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

void Rect::Create(int ax, int ay, int bx, int by)
{
  a.MoveTo(ax, ay);
  b.MoveTo(bx, by);
}

void Rect::Translate(int dx, int dy)
{
  a.Translate(dx, dy);
  b.Translate(dx, dy);
}
