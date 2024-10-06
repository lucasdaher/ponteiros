#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x = 1;
  int *p = &x;
  int *p2 = p;
  *p = *p + 2;
  *p2 = *p2 + 3;
  x++;
  *p2 = *p + x;
  printf("%d\n", x);

  // resultado de saída: 14
}