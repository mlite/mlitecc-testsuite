struct {
  unsigned int f1, f2;
} s;

void g (unsigned int *, unsigned int, unsigned int);

f()
{
 unsigned x, y;
 x = y = 0;
 while (y % 4)
   y++;
 g(&s.f2, s.f1 + x, 4);
}
