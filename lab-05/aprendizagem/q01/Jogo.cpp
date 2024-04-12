#include "Jogo.h"
#include <iostream>
using namespace std;

Jogo::Jogo()
{
  nome = "Vazio";
  preco = custo = 0.0f;
  horas = 0;
}

Jogo::Jogo(const string &titulo, float valor, int tempo)
{
  nome = titulo;
  preco = valor;
  horas = tempo;
  calcular();
}

void Jogo::atualizar(float valor)
{
  preco = valor;
  calcular();
}

void Jogo::jogar(int tempo)
{
  horas = horas + tempo;
  calcular();
}

void Jogo::exibir()
{
  cout << fixed;
  cout.precision(2);

  cout << nome << " R$"
       << preco << " "
       << horas << "h = R$"
       << custo << "/h\n";
}