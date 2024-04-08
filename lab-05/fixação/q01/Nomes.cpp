/*
Complete a implementação da classe Pessoa mostrada abaixo. Escreva um
programa que explore todas as formas de criar objetos e teste as diferentes formas
de exibir uma pessoa.

class Pessoa
{
private:
  string nome_;
  string sobrenome_;

public:
  Pessoa();
  Pessoa(const string &nome, const string &sobrenome = "");
  void Exibir(); // exibe apenas nome
  void Formal(); // exibe nome e sobrenome
};
*/

#include "Pessoa.h"

int main()
{
  Pessoa pedro;
  Pessoa maria{"Maria"};
  Pessoa joao{"Joao", "Silva"};
  Pessoa ana = Pessoa{"Ana", "Silva"};
  Pessoa carlos("Carlos");

  pedro.Exibir();
  maria.Exibir();
  joao.Exibir();
  ana.Exibir();
  carlos.Exibir();

  return 0;
}