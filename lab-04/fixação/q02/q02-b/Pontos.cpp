/*
Modifique a classe Point da questão anterior de forma a introduzir métodos inline
para retornar os valores dos atributos x e y. Teste 3 soluções diferentes:

a) Uma com métodos inline implementados dentro da classe
b) Uma com métodos inline implementados nos arquivos .cpp
c) Uma com métodos inline implementados no arquivo .h
*/

#include "Point.h"
#include <iostream>
using namespace std;

inline int Point::GetX() { return x; }
inline int Point::GetY() { return y; }

int main()
{
  Point p;

  p.MoveTo(10, 20);
  cout << "(" << p.GetX() << "," << p.GetY() << ")" << endl;

  p.Translate(2, 5);
  cout << "(" << p.GetX() << "," << p.GetY() << ")" << endl;
}