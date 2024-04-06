
class Point
{
private:
  int x;
  int y;

public:
  void MoveTo(int px, int py);
  void Translate(int dx, int dy);
  int GetX();
  int GetY();
};