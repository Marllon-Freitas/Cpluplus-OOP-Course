#include <iostream>
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa()
{
  nome_ = "";
  sobrenome_ = "";
}

Pessoa::Pessoa(const string &nome, const string &sobrenome)
{
  nome_ = nome;
  sobrenome_ = sobrenome;
}

void Pessoa::Exibir()
{
  cout << nome_ << " " << sobrenome_ << endl;
}

void Pessoa::Formal()
{
  cout << nome_ << ", " << sobrenome_ << endl;
}
