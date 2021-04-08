#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// o struc consegue armazenar varias variaveis em sequência na memoria
struct Person {
  char name[10];
  uint8_t age;
  uint8_t height;
};

void CreatePerson(char name[],
  uint8_t age,
  uint8_t height,
  void(*function_pointer)(struct Person)) {
  struct Person person;
  strcpy(person.name, name);
  person.age = age;
  person.height = height;

  (*function_pointer)(person);
}

void PrintPerson(struct Person person) {
  printf("Person: %s %d %d\n",
    person.name, person.age, person.height);
}

void PrintPerson2(struct Person person) {
  printf("Person: %s %d %d\n",
    person.name, person.height, person.age);
}

int main() {
  CreatePerson("Hello", 16, 180, &PrintPerson);
  CreatePerson("Hello", 16, 180, &PrintPerson2);
  return 0;
}
