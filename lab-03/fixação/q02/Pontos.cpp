/*
Um dos benefícios de encapsular dados é controlar o acesso e a modificação de
forma a manter a sua integridade, ou seja, evitar alterações incorretas dos dados
por parte do programador. No caso em que os dados podem ser alterados
livremente, C++ possibilita a solução do problema usando:

  a. Registros com funções membro
  b. Classes com dados públicos.

Teste as duas soluções no problema abaixo:

// armazena coordenadas x e y
// função para mover as coordenadas por dx e dy
// função para mover as coordenadas para px e py
*/

#include "Coord.h"
#include <iostream>

int main()
{
  Coord p1;

  p1.MoveTo(10, 20);
  std::cout << "p1: (" << p1.x << ", " << p1.y << ")" << std::endl;

  p1.Translate(5, 5);
  std::cout << "p1: (" << p1.x << ", " << p1.y << ")" << std::endl;

  return 0;
}