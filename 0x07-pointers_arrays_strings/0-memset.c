#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
  while (n--) {
    *s = b;
    s++;
  }
  return s;
}
