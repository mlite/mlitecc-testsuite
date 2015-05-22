/* PR 17051: SRA failed to rename the VOPS properly.  */

struct A
{
    char c, d;
};

void bar1 (struct A);
void bar2 (struct A, char);
void bar3 (char);

void foo(struct A *p)
{
    struct A a = *p;

    if (p->c)
        bar1(a);
    else
    {
        if (p) bar2(a,a.c);
        bar3(a.c);
    }
}
