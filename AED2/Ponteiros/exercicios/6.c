// 6) Fazer uma função que:
// a. receba 3 números como parâmetros: A, B e C.
// b. ordene de tal forma que, ao final da função, A contenha o menor número e C o maior.
// c. Fazer um programa que receba 3 números do usuário, chame a função e mostre os
// números ordenados.

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort_abc(int *a, int *b, int *c) {
  if (*a > *b) swap(a, b);
  if (*a > *c) swap(a, c);
  if (*b > *c) swap(b, c);
}

void main() {
  int a, b, c;
  printf("Digite tres numeros inteiros:\n");
  scanf("%d %d %d", &a, &b, &c);
  sort_abc(&a, &b, &c);
  printf("Numeros ordenados: %d %d %d\n", a, b, c);
  
}