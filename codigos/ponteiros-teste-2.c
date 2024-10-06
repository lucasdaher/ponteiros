#include <stdio.h>
#include <stdlib.h>

void atribuirValor(int *enderecoVariavel)
{
  *(enderecoVariavel) = 21;
}

int main()
{
  int idade = 20;
  atribuirValor(&idade);
  printf("%d", idade);

  return 0;
}