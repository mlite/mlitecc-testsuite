typedef unsigned short W;
typedef const W *P;

extern void g(P);

const P es = (const W []){ 'R' };
void
f ()
{
  const P s = (const W []){ 'R' };
  g (es);
  g (s);
}
