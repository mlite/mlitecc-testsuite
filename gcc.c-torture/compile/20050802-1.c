/* PR 23196 */

void bar (char *);
void foo()
{
  char c;

  c |= 1;
  bar(&c);
}
