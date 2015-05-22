s22 (void * p) 
{
  return 0;
}



int main ()
{
  extern s22(void *);
  static int (*sec[])() = { s22 };
  sec[0] (0);
}
