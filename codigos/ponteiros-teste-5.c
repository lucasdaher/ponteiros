#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 1;
  int *p = &x;

  for (; x < 5; x++)
  {
    if (*p % 2 != 0)
    {
      *p = (*p) * x;
    }
  }
  printf("%d\n", x);

  // resultado esperado: 10 - opção letra B

  return 0;
}