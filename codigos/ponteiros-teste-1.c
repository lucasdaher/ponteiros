#include <stdio.h>
#include <stdlib.h>

// O código abaixo possui um erro, qual é?
int main()
{
  int x, *p;
  x = 13;
  *p = x; // !!!

  return 0;
}

// Resposta: o ponteiro não foi inicializado