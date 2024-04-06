/*
O tamanho de um objeto na memória é definido apenas pelo espaço ocupado pelos
seus atributos ou ele inclui também os métodos? Construa um programa para fazer
o teste usando o operador sizeof e a classe Point exibida abaixo.

class Point
{
private:
  int x;
  int y;

public:
  void MoveTo(int px, int py);
  void Translate(int dx, int dy);
};
*/

#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
  Point p;
  cout << sizeof(p) << endl;

  p.MoveTo(10, 20);
  // cout << "(" << p.x << "," << p.y << ")" << endl;

  p.Translate(2, 5);
  // cout << "(" << p.x << "," << p.y << ")" << endl;
}

// O tamanho de um objeto na memória é definido apenas pelo espaço ocupado pelos
// seus atributos. Os métodos não ocupam espaço na memória associado a um objeto
// da classe. O tamanho de um objeto da classe Point é 8 bytes, pois cada atributo
// da classe Point é um inteiro de 4 bytes.
