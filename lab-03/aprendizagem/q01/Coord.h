class Coord
{
private:
  int x;
  int y;

public:
  void Translate(int dx, int dy);
  void MoveTo(int px, int py);
  int getX() const;
  int getY() const;
};