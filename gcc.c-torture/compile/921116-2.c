typedef struct {
 long l[5];
} t;

void g (long int *, int);

f(size)
{
 t event;
 g(&(event.l[2 + size]), (3 - size) * 4);
}
