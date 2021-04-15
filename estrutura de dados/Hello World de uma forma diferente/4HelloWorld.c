#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// o struc consegue armazenar varias variaveis em sequência na memoria
struct HelloWorld {
    char hello[10];
};

// recebe um char e uma func e essa func recebe um struct
void CreateHelloWorld(char hello[],
    void(*function_pointer)(struct HelloWorld)) {
    struct HelloWorld helloworld;
    strcpy(helloworld.hello, hello);

    // chamamos a função que nos foi passada
    (*function_pointer)(helloworld);
}

void PrintHello(struct HelloWorld helloworld) {
    printf("%s\n", helloworld.hello);
}

void PrintHello2(struct HelloWorld helloworld2) {
    printf("%s\n", helloworld2.hello);
}

int main() {
    CreateHelloWorld("Hello", &PrintHello);
    CreateHelloWorld("World", &PrintHello2);
    return 0;
}
