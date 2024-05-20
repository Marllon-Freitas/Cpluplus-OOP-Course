/*
Considerando a classe Rect mostrada abaixo, substitua o método Create por
construtores apropriados. Crie um construtor padrão, um construtor que receba
dois pontos e um construtor que receba 4 valores inteiros.

class Rect
{
private:
  Point a;
  Point b;

public:
  void Create(int ax, int ay, int bx, int by);
  void Translate(int dx, int dy);
};
*/

#include "Point.h"

class Rect
{
private:
  Point a;
  Point b;

public:
  Rect();
  Rect(int ax, int ay, int bx, int by);
  Rect(Point pa, Point pb);
  void Translate(int dx, int dy);
};
