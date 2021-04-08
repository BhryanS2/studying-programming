#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char hello[] = "Hello World";
  printf("%s\n", hello);

  // aloca memoria
  char *hello2 = malloc(sizeof(hello));
  strcpy(hello2, hello);// string copy
  printf("hello2: %x\n", hello2);

  char *hello3 = hello2 + 6;
  printf("hello2: %s\n", hello2);
  printf("hello3: %s\n", hello3);
  //usando ponteiros não criamos novas strings, apenas apontamos para a memoria no heap

  // libera memoria
  free(*hello2);
  return 0;
}
