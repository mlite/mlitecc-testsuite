/* Make sure that LEGITIMIZE_ADDRESS is called to handle
   negative displacements.  */


int test (int *addr)
{
  return *(addr - 1);
}
