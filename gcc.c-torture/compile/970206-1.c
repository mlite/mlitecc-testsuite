struct Rect
{
  int iA;
  int iB;
  int iC;
  int iD;
};

void g (int, struct Rect);

void
f (int * const this, struct Rect arect)
{
  g (*this, arect);
}
