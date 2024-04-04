// versão com struct
// struct Coord
//{
//	int x;
//	int y;
//
//	void Translate(int dx, int dy);
//	void MoveTo(int px, int py);
//};

// versão com classe
class Coord
{
public:
  int x;
  int y;

  void Translate(int dx, int dy);
  void MoveTo(int px, int py);
};