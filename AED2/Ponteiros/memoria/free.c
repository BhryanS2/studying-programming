#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *memoria = (char *)malloc(50 * sizeof(char));
  if (memoria == NULL)
  {
    return 1;
  }
  printf("Memoria alocada.\n");

  free(memoria); // Primeira liberação
  printf("Primeira free feita.\n");

  free(memoria);                   // Segunda liberação (BUG!)
  printf("Segunda free feita.\n"); // Este printf pode não ser executado

  return 0;
}
