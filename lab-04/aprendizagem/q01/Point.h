
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

inline int Point::GetX() { return x; }
inline int Point::GetY() { return y; }

class Rect
{
private:
  Point a;
  Point b;

public:
  void Create(int ax, int ay, int bx, int by);
  void Translate(int dx, int dy);
  Point GetA();
  Point GetB();
};

inline Point Rect::GetA() { return a; }
inline Point Rect::GetB() { return b; }