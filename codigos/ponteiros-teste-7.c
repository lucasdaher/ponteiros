#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 7, j = 5, c;
  int *p;
  int **q;
  p = &i;
  q = &p;
  c = **q + j;
  printf("%d\n", c);

  // resultado esperado: 12
}