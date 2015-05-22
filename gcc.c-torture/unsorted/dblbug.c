union real_extract
{
  double  d;
  int i[sizeof (double ) / sizeof (int)];
};

typedef struct
{
  int zzzz;
} *rtx;

int foo (int *, union real_extract *);

rtx
immed_real_const_1 (d)
     double  d;
{
  union real_extract u;
  register rtx r;

  u.d = d;
  foo (&(r->zzzz), &u);
}
