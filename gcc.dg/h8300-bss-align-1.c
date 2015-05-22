/* Make sure that the H8 backend does align zero initialized variables. */
/* { dg-do compile } */
/* { dg-options "" } */

struct s {
  char a, b;
  long c;
};

struct s s = {0};

/* { dg-final { scan-assembler ".align" } } */
