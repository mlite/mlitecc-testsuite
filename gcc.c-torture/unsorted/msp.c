#ifdef STACK_SIZE
# define A_SIZE (STACK_SIZE/sizeof(int))
#else
# define A_SIZE 16384
#endif

int bar (int [A_SIZE]);

foo ()
{
  int a[A_SIZE];
  bar (a);
}
