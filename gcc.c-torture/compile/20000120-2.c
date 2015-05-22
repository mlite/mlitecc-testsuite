int odd (int);

int
foo(int i, int j)
{
  return odd(i + j);
}

int
odd(int i)
{
  return i & 0x1;
}

