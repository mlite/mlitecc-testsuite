/* { dg-do compile } */
/* { dg-options "-S" } */

void f () __attribute__((weak));

typedef void PF (void);

void f(void){};

PF* g (void) { return f; }

int main()
{
	(*g())();
	return 0;
}
