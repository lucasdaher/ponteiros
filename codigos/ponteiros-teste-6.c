#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *i, *q, y = 0;
  i = &y;
  *i = 2;
  y = *i + 1;
  *i += 1;
  ++*i;
  (*i)++;
  q = i;
  printf("%d %d\n", *q, y);
}