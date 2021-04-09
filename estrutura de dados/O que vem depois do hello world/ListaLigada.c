#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// LISTA ligada

/*
vantagem
ela pode ser pensada como um array onde o custo de inserção no no meio é iqual a
isertção no fim

desvantagem
em um array comum podemos pegar o endereço do primeiro e multiplicar o tamnho de cada
elemento pela posição que queremos que chegamos onde queremos, já na lista ligada,
eu preciso pegar a primeira estruct e ir seguindo os ponteiros para o próximo elemento até chegar no no valor desejado.
Sendo assim qunato maio r a lista, mais lento a busca
*/

struct Node {
    int value;
    // isso aqui é um nó que aponta para o no que foi criado antes dele
    struct Node* previous;
};

// aqui inicializamos um nó, que recebe um interio qualquer e um nó apontanto o endereço de memoria
struct Node* createNode(int value, struct Node* previous) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->value = value;
    // se previous tiver algum valor ele receberá ele mesmo, senão ele recebe 0
    node->previous = previous ? previous : 0;
    return node;
}

int main() {
    // como é o primeiro passamos null
    struct Node* first = createNode(2020, NULL);
    // apartir do segundo passamos referencias do no anteriios
    struct Node* second = createNode(2021, first);
    struct Node* third = createNode(2022, second);

    // aponta para o ultimo nó criado
    struct Node* iterator = third;
    while (iterator) {
        printf("%d, ", iterator->value);
        iterator = iterator->previous;
    }
}
