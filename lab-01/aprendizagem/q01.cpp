/*
Defina	uma	classe	para	representar	uma	conta	bancária.	Os	dados	membro	da	
classe	devem	incluir	o	nome	do	cliente	(uma	string),	o	número	da	conta	(um	
inteiro)	e	o	saldo	(um	ponto-flutuante).	

As	funções	membro	devem	permitir:

  a. Criar	e	inicializar	um	objeto
  b. Exibir	os	dados	da	conta
  c. Depositar	dinheiro
  d. Sacar	dinheiro

Não	é	necessário	implementar	a	classe,	apenas	defina	seus	métodos	e	atributos.
*/

#include <iostream>
#include <string>
using namespace std;

class ContaBancaria
{
  private:
    string nome;
    int numero;
    float saldo;

  public:
    ContaBancaria(const string &nome, int numero, float saldo);
    void exibir();
    void depositar(float valor);
    void sacar(float valor);
};

int main()
{
  ContaBancaria conta("João", 1234, 1000.0f);
  conta.exibir();
  conta.depositar(500.0f);
  conta.exibir();
  conta.sacar(200.0f);
  conta.exibir();
}