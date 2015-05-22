/* { dg-do compile }
   { dg-final { scan-assembler-not "abcdefghijklmnopqrstuvwxyz" } } */

extern char *bar;

extern void foo (void)
{
   char str[]="abcdefghijklmnopqrstuvwxyz";
   bar = str;
}
