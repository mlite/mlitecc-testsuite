/* The string constant in this test case should be emitted exactly once.  */
/* { dg-do compile } */

static inline int returns_23() { return 23; }

const char *test1(void) { if (returns_23()) return 0; return "hi there"; }
const char *test2(void) { return "hi there"; }
const char *test3(void) { return "hi there"; }
