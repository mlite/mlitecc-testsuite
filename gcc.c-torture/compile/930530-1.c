f ()
{
  struct s { char a, b; } x;
    void g (struct s, struct s, struct s, struct s);
  g (x, x, x, x);
}
