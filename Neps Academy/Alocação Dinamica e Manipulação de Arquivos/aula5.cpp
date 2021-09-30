// Principais errros
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int mais() {
    //int *p;
    //utilizar ponteiro sem alocar

    /*p = (int *)malloc(sizeof(int) * 10);
    //esquece de fazer esse malloc e vai fazer um for
    for(int i = 0; i < 10; i++) {
        scanf("%d", &p[i]);
    }*/

    //não verificar a alocação

    //p = (int *)malloc(sizeof(int) * 3);
    //verifica se a alocação realmente aconteceu
    /*if(p == NULL) return -1;
    else {
        for(int i = 0; i < 3; i++) {
            scanf("%d", &p[i]);
        }

        for(int i = 0; i < 3; i++) {
            printf("%d ", &p[i]);
        }
    }*/

    //não desalocar memoria
    
    //depois de acabar de usar o ponteiros muitas pessaos nãod esalocam o ponteiro e pode fazer com que falte memoria
    //p = (int *)malloc(sizeof(int) * 3);
    //verifica se a alocação realmente aconteceu
    /*if(p == NULL) return -1;
    else {
        for(int i = 0; i < 3; i++) {
            scanf("%d", &p[i]);
        }

        for(int i = 0; i < 3; i++) {
            printf("%d ", &p[i]);
        }
    }*/
    //free(p);

    //utilizar ponteirosdepois da desalocação
    
    /*if(p == NULL) return -1;
    else {
        for(int i = 0; i < 3; i++) {
            scanf("%d", &p[i]);
        }

        for(int i = 0; i < 3; i++) {
            printf("%d ", &p[i]);
        }
        //desaloquei a memoria e logo em seguida tento usar ela, isso gera erro
        free(p);
        for(int i = 0; i < 3; i++) {
            printf("%d ", &p[i]);
        }
    }*/

    //esquecer o \0 ao alocar string
    char *p;
    //NepsAcademy
    //p = (char *)malloc(sizeof(char) * 11);//aqui estou esquecendo o /0;
    //a maneira correta é aumentar em um o tamanho ou fazer um strlen com um espaço no final, assim:
    p = (char *)malloc(sizeof(char) * strlen("NepsAcademy "));
    strcpy(p, "NepsAcademy");

    if(p == NULL) return -1;
    else {
        printf("%s\n", p);
    }
}