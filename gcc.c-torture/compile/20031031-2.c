/* PR/10239 */

enum node_type
{
  INITIAL = 0, FREE,
  PRECOLORED,
  SIMPLIFY, SIMPLIFY_SPILL, SIMPLIFY_FAT, FREEZE, SPILL,
  SELECT,
  SPILLED, COALESCED, COLORED,
  LAST_NODE_TYPE
};

void bar ();
void foo ();
void baz ();

inline void
put_web (enum node_type type)
{
  switch (type)
    {
    case INITIAL:
    case FREE:
    case FREEZE:
    case SPILL:
      foo ();
      break;
    case PRECOLORED:
      bar ();
      break;
    default:
      baz ();
    }
}

void
reset_lists ()
{
  put_web (INITIAL);
}
