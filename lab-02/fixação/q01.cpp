/*
Considerando	a	classe Jogo	declarada abaixo,	implemente	o	código	para	os
métodos. Construa	um	programa	para	testar	a	criação	de	uma	variável	do	tipo	Jogo
e	testar a	utilização	dos	métodos.

#include <string>
using std::string;
class Jogo
{
private:
  string nome; // nome do jogo
  float preco; // preço do jogo
  int horas;   // quantidade de horas jogadas
  float custo; // valor por hora jogada

  void calcular()
  {
    if (horas > 0)
      custo = preco / horas;
  }

public:
  void adquirir(const string &titulo, float valor);
  void atualizar(float valor);
  void jogar(int tempo);
  void exibir();
};
*/

#include <iostream>
#include <string>
using namespace std;

class Jogo
{
private:
  string nome; // nome do jogo
  float preco; // preço do jogo
  int horas;   // quantidade de horas jogadas
  float custo; // valor por hora jogada

  void calcular()
  {
    if (horas > 0)
      custo = preco / horas;
  }

public:
  void adquirir(const string &titulo, float valor);
  void atualizar(float valor);
  void jogar(int tempo);
  void exibir();
};

void Jogo::adquirir(const string &titulo, float valor)
{
  nome = titulo;
  preco = valor;
  horas = 0;
  custo = preco;
}

void Jogo::atualizar(float valor)
{
  preco = valor;
  calcular();
}

void Jogo::jogar(int tempo)
{
  horas += tempo;
  calcular();
}

void Jogo::exibir()
{
  cout << nome << " R$"
       << preco << " "
       << horas << "h = R$"
       << custo << "/h\n";
}

int main()
{
  Jogo jogo;
  jogo.adquirir("The Witcher 3", 100.0f);
  jogo.exibir();
  jogo.jogar(50);
  jogo.exibir();
  jogo.atualizar(120.0f);
  jogo.exibir();
  jogo.jogar(30);
  jogo.exibir();
}
