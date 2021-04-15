#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
// para C ficar parecendo POO, definimos que class será trocada por struct
#define Class struct

// o struc consegue armazenar varias variaveis em sequência na memoria
Class Hello{
  char name[10];
  void(*show)(Class Hello*);
};

void Hello_print(Class Hello* this) {
    printf("%s\n", this->name);
}

// constructor
Class Hello* newHello(char name[]) {
    Class Hello* this = (Class Hello*) malloc(sizeof(Class Hello*));
    strcpy(this->name, name);

    this->show = &Hello_print;
    return this;
}

int main() {
    Class Hello* Hello2 = (Class Hello*)newHello("Hello World");

    Hello2->show(Hello2);

    return 0;
}
