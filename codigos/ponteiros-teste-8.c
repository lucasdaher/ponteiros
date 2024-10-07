#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char nome[20];
  char sobreNome[20];
} Pessoa;

int main(void)
{
  Pessoa joaquim, *referencia;
  char *p;
  int x;
  referencia = &joaquim;
  strcpy(referencia->nome, "joaquim");
  strcpy(referencia->sobreNome, "barbosa");
  p = strcat(referencia->nome, referencia->sobreNome);
  x = strlen(p);
  printf("%d", x++);

  // resultado esperado = 14
}