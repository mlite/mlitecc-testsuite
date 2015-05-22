struct _IO_FILE;
typedef struct _IO_FILE FILE;

extern FILE *fopen(const char *path, const char *mode);
extern char *strcat(char *dest, const char *src);
extern char *strcpy(char *dest, const char *src);
extern unsigned int strlen(const char *s);

FILE * concat_fopen (char *s1, char *s2, char *mode)
{
  char str[strlen (s1) + strlen (s2) + 1];
  strcpy (str, s1);
  strcat (str, s2);
  return fopen (str, mode);
}
