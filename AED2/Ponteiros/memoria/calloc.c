#include <stdio.h>
#include <stdlib.h>

void main() {
  // vetor de 10 posições com calloc, onde todas as variáveis vem zerada
  int* vetor = (int *)calloc(10, sizeof(int));

  printf("valor default: \n");
  for(int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
    vetor[i] = i + 1;
  }
  printf("\n");

  for(int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }
}
