/* PR target/10072 */
/* Originator: Peter van Hoof <p.van-hoof@qub.ac.uk> */
/* { dg-do compile } */
/* { dg-options "-std=c99" } */

void p(int v)
{
  int i=v,j;
  float a,b,c,x[i + v];

  x[i] = (a/(((b)>(c)) ? (b) : (c)) - (((i) == (j)) ? 1.f : 0.f));
}
