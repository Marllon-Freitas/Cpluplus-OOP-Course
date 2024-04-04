#include "Coord.h"

void Coord::Translate(int dx, int dy)
{
  if (x + dx >= 0 && x + dx <= 1919)
    x += dx;

  if (y + dy >= 0 && y + dy <= 1079)
    y += dy;
}

void Coord::MoveTo(int px, int py)
{
  if (px >= 0 && px <= 1919)
    x = px;

  if (py >= 0 && py <= 1079)
    y = py;
}

int Coord::getX() const
{
  return x;
}

int Coord::getY() const
{
  return y;
}
