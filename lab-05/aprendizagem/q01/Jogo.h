#include <string>
using std::string;

class Jogo
{
private:
  string nome;
  float preco;
  int horas;
  float custo;

  void calcular();

public:
  Jogo();
  Jogo(const string &titulo, float valor, int tempo = 0);
  void atualizar(float valor);
  void jogar(int tempo);
  void exibir();
};

inline void Jogo::calcular()
{
  if (horas > 0)
    custo = preco / horas;
  else
    custo = preco;
}
