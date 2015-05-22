void g();
int h ();

f()
{
int x=1;
while(x)
{
x=h();
if(x)
g();
}
}
