/*
Expanda a classe Point mostrada abaixo de forma a fornecer um construtor padrão
e um construtor que receba os valores para os pontos x e y. Crie também um
método Print para exibir os pontos na tela.
*/

class Point
{
private:
  int x;
  int y;

public:
  Point();
  Point(int px, int py);
  void MoveTo(int px, int py);
  void Translate(int dx, int dy);
  void Print();
};
