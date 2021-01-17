/*
Realloc
essa é uma função de realocação de memoria
realloc(ponteiro, tamaho em bytes);
*/
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
    int *p;
    //defino uam poisição de memoria de tamanho 2
    p = (int *)malloc(sizeof(int) * 2);
    printf("Local inicial   = %d\n", p);

    //realoco o ponteiro para 20 posições
    p = (int *)realloc(p, sizeof(int) * 20);
    printf("Local meio      = %u\n", p);

    for(int i  = 0; i < 20; i++) {
        p[i] = i;
    }

    p = (int *)realloc(p, sizeof(int) * 2);
    printf("Local final     = %u\n", p);

    //acho que não funcionou na minha máquinha ;-;
}