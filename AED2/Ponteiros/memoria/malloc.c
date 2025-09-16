#include <stdio.h>
#include <stdlib.h>

void main() {
  // vetor de 10 posições com malloc
  printf("valor default: \n");
  int* vetor = (int *)malloc(10 * sizeof(int));

  for(int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
    vetor[i] = i + 1;
  }
  printf("\n");

  for(int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }
}
