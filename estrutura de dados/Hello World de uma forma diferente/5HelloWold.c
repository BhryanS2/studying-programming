#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
// para C ficar parecendo POO, definimos que class será trocada por struct
#define Class struct

// o struc consegue armazenar varias variaveis em sequência na memoria
Class Person{
  char name[10];
  void(*show)(Class Person*);
};

void person_print(Class Person* this) {
    printf("%s\n", this->name);
}

// constructor
Class Person* newPerson(char name[]) {
    Class Person* this = (Class Person*) malloc(sizeof(Class Person*));
    strcpy(this->name, name);

    this->show = &person_print;
    return this;
}

int main() {
    Class Person* person2 = (Class Person*)newPerson("Hello World");

    person2->show(person2);

    return 0;
}
