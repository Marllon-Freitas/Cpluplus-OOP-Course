

class Point
{
private:
  int x;
  int y;

public:
  void MoveTo(int px, int py);
  void Translate(int dx, int dy);
  int GetX() { return x; };
  int GetY() { return y; };
};