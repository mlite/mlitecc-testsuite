/* 2.3.3 crashes on 386 with -traditional */

int vfork ();
f(a)
     char *a;
{
  int d = strcmp(a,"-");

  while (vfork() < 0)
    ;
  return d;
}
