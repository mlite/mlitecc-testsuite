typedef void foo (void);

void g (int);

f (x)
{
  if (x)
    {
      const foo* v;
      (*v)();
    }
  else
    g (0);
}
