struct ack {
    char a, b, c;
};

int foo (struct ack);

main()
{
   struct ack bad;

   foo(bad);
}

foo(c)
   struct ack c;
{
}
