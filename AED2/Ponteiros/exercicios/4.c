// 4) Fazer um programa para:
// a. declarar variáveis a, b, c, d do tipo int.
// b. declarar variáveis e, f, g, h do tipo float.
// c. declarar vetor v de 10 elementos do tipo char.
// d. declarar variável x do tipo int.
// e. criar um ponteiro apontando para o endereço de a.
// f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de
// número). Caso o endereço coincida com o endereço de alguma outra variável, informar o
// fato.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, d;
  float e, f, g, h;
  char v[10];
  int x;
  int* ptr = &a;

  for (int i = 0; i < 10; i++) v[i] = 'A' + i;

  printf("Endereços das variáveis:\n");
  printf("a: %p\n", (void*)&a);
  printf("b: %p\n", (void*)&b);
  printf("c: %p\n", (void*)&c);
  printf("d: %p\n", (void*)&d);
  printf("e: %p\n", (void*)&e);
  printf("f: %p\n", (void*)&f);
  printf("g: %p\n", (void*)&g);
  printf("h: %p\n", (void*)&h);
  printf("x: %p\n", (void*)&x);
  printf("v: %p\n", (void*)v);

  printf("\nIncrementando o ponteiro:\n");
  for (int i = 0; i < 10; i++) {
    printf("ptr: %p, valor(int): %d", (void*)ptr, *ptr);
    
    if (ptr == &a) printf(" ptr == 'a'");
    else if (ptr == &b) printf(" ptr == 'b'");
    else if (ptr == &c) printf(" ptr == 'c'");
    else if (ptr == &d) printf(" ptr == 'd'");
    else if ((void*)ptr == (void*)&e) printf(" ptr = 'e'");
    else if ((void*)ptr == (void*)&f) printf(" ptr = 'f'");
    else if ((void*)ptr == (void*)&g) printf(" ptr = 'g'");
    else if ((void*)ptr == (void*)&h) printf(" ptr = 'h'");
    else if (ptr == &x) printf(" ptr == 'x'");
    else if ((char*)ptr >= (char*)v && (char*)ptr < ((char*)v + 10)) printf(" ptr == v[%ld]", (long)((char*)ptr - (char*)v));
    printf("\n");
    ptr++;
  }

  return 0;
}