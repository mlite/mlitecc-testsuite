/* The problem here was that the statements that
   loaded from exception.reason where not being
   marked as having volatile behaviour which
   caused load PRE on the tree level to go
   into an infinite loop. */

struct gdb_exception
{
  int reason;
};

int exceptions_state_mc_init (struct gdb_exception *);
void foo ();

int catch_exceptions_with_msg (int *gdberrmsg)
{
  volatile struct gdb_exception exception;
  exceptions_state_mc_init (&(exception));
  if (exception.reason != 0)
    foo ();
  return exception.reason;
}