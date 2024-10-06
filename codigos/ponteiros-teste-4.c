#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int c = 12;
  int *p1 = &c;
  int *p2 = p1;
  *p1 = *p1 / 3;
  *p2 = *p2 + 10;
  c -= 5;
  *p2 = *p1 - c;
  printf("%d\n", c);

  // resultado de saída: 0
}