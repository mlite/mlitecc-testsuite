/* { dg-do compile }
   { dg-final { scan-assembler-not "\"foobar\"" } } */

const char *str;

void foobar (void)
{
  str = __FUNCTION__;
}
