int main (int argc, char ** argv)
{
   static _Bool b = 1;
   
   printf ("strlen(\031\139) = %d", b);

   b = 256;
   printf ("strlen(\031\139) = %d", b);
}
