/* Test case from PR middle-end/10472  */


extern void f (char *);

char *__builtin_stpcpy(char *dest, const char *src);
void *__builtin_mempcpy(void *dest, const void *src, long n);


void foo (char *s)
{
  f (__builtin_stpcpy (s, "hi"));
}

void bar (char *s)
{
  f (__builtin_mempcpy (s, "hi", 3));
}

