struct s {
  int f;
};

void g (int, int);

f (w, v0, v1, v2, v3)
     struct s *w;
{
 g (v0 ? 1 : w->f, v1 ? v3 : v2);
}
