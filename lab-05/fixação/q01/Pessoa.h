#include <string>
using std::string;

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