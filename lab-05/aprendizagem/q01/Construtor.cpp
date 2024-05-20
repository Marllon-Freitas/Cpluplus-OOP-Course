/*
Amplie a classe Jogo da questão anterior de forma a permitir a criação de objetos
da classe Jogo com uma quantidade de horas jogadas diferente de zero. Ajuste
todos os construtores e métodos para trabalhar de forma correta com tempo e
custo do jogo.

Jogo(const string& titulo, float valor, int tempo);
*/

#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
  Jogo jogo1("Jogo 1", 50.0f);
  jogo1.exibir();

  jogo1.atualizar(60.0f);
  jogo1.exibir();

  jogo1.jogar(5);
  jogo1.exibir();

  Jogo jogo2("Jogo 2", 30.0f, 2);
  jogo2.exibir();

  jogo2.jogar(3);
  jogo2.exibir();

  return 0;
}