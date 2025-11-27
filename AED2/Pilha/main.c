#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


void main() {
  struct Pilha pilha;
  create(&pilha);
  for (int i = 0; i < 10; i++)
  {
    push(&pilha, i);
  }

  while (!isEmpty(pilha))
  {
    int valor;
    pop(&pilha, &valor);
    printf("%d poped\n", valor);
  }

}

// gcc -c main.c -o main.o
// gcc -o main.exe main.o
