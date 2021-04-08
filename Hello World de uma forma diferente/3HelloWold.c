#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// o struc consegue armazenar varias variaveis em sequência na memoria
struct Person{
  char nome[10];
  uint8_t age;
  uint8_t height;
};


int main() {
  struct Person person;
  strcpy(person.nome, "Hello");
  person.age = 16;
  person.height = 180;

  printf("%x\n", person);

  return 0;
}
