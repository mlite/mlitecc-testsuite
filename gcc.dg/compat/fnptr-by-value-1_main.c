/* Test passing function pointers.  */
/* { dg-options "-w" } */
extern void fnptr_by_value_1_x (void);
extern void exit (int);
int fails;

int
main ()
{
  fnptr_by_value_1_x ();
  exit (0);
}
