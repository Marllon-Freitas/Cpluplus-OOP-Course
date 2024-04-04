/*
Crie um programa para criar dois objetos da classe Jogo e exibir os endereços
desses objetos na tela.
*/

#include <iostream>
#include <string>
using namespace std;

class Jogo
{
  private:
    string nome;
    int ano;
    float preco;

  public:
    Jogo(const string &nome, int ano, float preco);
    void exibir();
};

Jogo::Jogo(const string &nome, int ano, float preco)
{
  this->nome = nome;
  this->ano = ano;
  this->preco = preco;
}

void Jogo::exibir()
{
  cout << "Nome: " << nome << endl;
  cout << "Ano: " << ano << endl;
  cout << "Preço: " << preco << endl;
}

int main()
{
  Jogo jogo1("The Legend of Zelda: Breath of the Wild", 2017, 299.99f);
  Jogo jogo2("Red Dead Redemption 2", 2018, 249.99f);

  cout << "Endereço do jogo1: " << &jogo1 << endl;
  cout << "Endereço do jogo2: " << &jogo2 << endl;
}