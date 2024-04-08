/*
Modifique a classe Jogo apresentada abaixo de forma que um Jogo possa ser
construído sem um nome e sem um valor. Faça isso de duas formas diferentes:
  a. Altere o construtor para usar argumentos padrão
  b. Crie um construtor padrão

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
  Jogo(const string &titulo, float valor);
  void atualizar(float valor);
  void jogar(int tempo);
  void exibir();
};
*/

#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
  // objeto da classe Jogo
  Jogo gta = Jogo("Grand Theft Auto", 90.0f);
  Jogo rdr;

  // chamando métodos
  gta.atualizar(100.0f);
  gta.jogar(2);
  gta.exibir();

  rdr.atualizar(50.0f);
  rdr.jogar(1);
  rdr.exibir();
}