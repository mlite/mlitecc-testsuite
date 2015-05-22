typedef struct {
  char y;
  char x[32];
} X;

extern f (X, X);

int z (void)
{
  X xxx;
  X * ptr;
  ptr = &xxx;
  xxx.x[0] =
  xxx.x[31] = '0';
  ptr->x[31] = '0';
  xxx.y = 0xf;
  return f (xxx, xxx);
}

int main (void)
{
  int val;

  val = z ();
  if (val != 0x60)
    abort ();
  exit (0);
}

int f(X x, X y)
{
  if (x.y != y.y)
    return 'F';

  return x.x[0] + y.x[0];
}
