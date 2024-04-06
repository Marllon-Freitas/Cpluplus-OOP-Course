/*
Dada uma classe Rect que define um retângulo por dois pontos, como mostrado na
figura abaixo, construa a implementação dos métodos Create e Translate de forma
a manter o tamanho do retângulo inalterado pela operação de movimentação.

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

/*
Dada uma classe Rect que define um retângulo por dois pontos, como mostrado na
figura abaixo, construa a implementação dos métodos Create e Translate de forma
a manter o tamanho do retângulo inalterado pela operação de movimentação.
*/

#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
  Rect r;

  r.Create(10, 20, 30, 40);
  cout << "Ponto A: (" << r.GetA().GetX() << "," << r.GetA().GetY() << ")" << endl;
  cout << "Ponto B: (" << r.GetB().GetX() << "," << r.GetB().GetY() << ")" << endl;

  r.Translate(2, 5);
  cout << "Ponto A: (" << r.GetA().GetX() << "," << r.GetA().GetY() << ")" << endl;
  cout << "Ponto B: (" << r.GetB().GetX() << "," << r.GetB().GetY() << ")" << endl;

  return 0;
}