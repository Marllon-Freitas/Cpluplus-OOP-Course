#include "Point.h"
#include <iostream>

Point::Point()
{
  x = y = 0;
}

Point::Point(int px, int py)
{
  x = px;
  y = py;
}

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

void Point::Print()
{
  std::cout << "(" << x << ", " << y << ")\n";
}
