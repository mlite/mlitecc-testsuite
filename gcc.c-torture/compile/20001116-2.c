#include<wchar.h>

int x[60];
char *y = ((char*)&(x[2*8 + 2]) - 8);
int z = (&L"Foobar"[1] - &L"Foobar"[0]);
