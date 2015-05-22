/* Simple character translation test.  */
/* { dg-do compile }
   { dg-final { scan-assembler-not "string foobar" } } */
char *foo = "string foobar";
