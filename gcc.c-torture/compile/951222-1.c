#include <setjmp.h>

extern long long foo ();

long long
sub1 ()
{
  jmp_buf buf;
  char junk[10000];
  register long long a, b, c;

  b = foo ();

  setjmp (buf);
  a = foo ();
  c = a - b;
  return c;
}
