f()
{
  struct s { char x; } r;
  int g (struct s);
  g(r);
}
