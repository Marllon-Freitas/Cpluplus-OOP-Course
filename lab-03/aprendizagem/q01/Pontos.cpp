/*
Se no problema da questão anterior os valores de x e y fossem coordenadas de
uma tela com resolução 1920 pixels na horizontal por 1080 pixels na vertical, e
fosse necessário manter o valor da coordenada x sempre na faixa [0 – 1919] e da
coordenada y sempre entre [0 – 1079], faria sentido encapsular os dados para
evitar alterações indesejadas fora da faixa.

Crie uma classe que encapsule os dados e forneça uma interface pública para
manipular os dados de forma segura.

A classe deve ter atributos para:
  • Posição x
  • Posição y
A classe deve ter os métodos:
  • Translate: mover as coordenadas por valores dx e dy
  • MoveTo: mover as coordenadas para valores px e py
*/

#include "Coord.h"
#include <iostream>
using namespace std;

int main()
{
  Coord c;

  c.MoveTo(100, 100);
  cout << c.getX() << " " << c.getY() << endl;

  c.Translate(10, 10);
  cout << c.getX() << " " << c.getY() << endl;

  return 0;
}