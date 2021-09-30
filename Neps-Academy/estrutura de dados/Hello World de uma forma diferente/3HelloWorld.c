#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// o struc consegue armazenar varias variaveis em sequência na memoria
struct HelloWorld {
    char nome[10];
};


int main() {
    struct HelloWorld helloworld;
    strcpy(helloworld.nome, "Hello World");

    printf("%x\n", helloworld);
    printf("%s\n", helloworld.nome);

    return 0;
}
