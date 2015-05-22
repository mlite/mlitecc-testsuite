int foo (char, char);
char bar ();
int gra (char);
int gurka (char);

move (a, b)
     char a, b;
{
  char s;
  s = a;
  if (s)
    gurka (s);
  foo (b, a);
  a = bar ();
  b = bar ();
  gra (s);
}
