extern int memcmp(const void *s1, const void *s2, unsigned int n);

static int kind_varread(char *str)
{
  if (0 == memcmp("%_#",               str, 3))  return 2;
  /* NOTREACHED */
}

