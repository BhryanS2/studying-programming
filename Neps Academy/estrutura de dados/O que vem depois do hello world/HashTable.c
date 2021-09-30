#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define HASH_SIZE 100

/*
Hash é quando criamos uma lista, mas ao invés de navegarmos por posição, navegamos por chave
*/
// struct principal
struct Node {
    // vamos converter esse char para numero, e esse numero é o hash
    char* key;
    char* value;
    struct Node* next;
};

struct Hash {
    struct Node* list[HASH_SIZE];
};

unsigned int hashCode(char* key) {
    /*
    o calculo usado é o djb2
    não é o único, mas é o mais simples
    outros: sdbm, fnv-1, CRC32
    */
    unsigned long hash = 5381;
    unsigned int c;
    while (c = *key++) {
        hash = ((hash << 5) + hash) + c;//hash * 32 + c
    }
    return hash % HASH_SIZE;
}

struct Node* createNode(char* key, char* value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->value = value;
    return node;
}

void isertNode(struct Hash* hash, char* key, char* value) {
    // esse numero devolvido idetifica uma ou mais chaves
    //ela não é unica para cada chave, pois fazemos o modulo
    //ou seja, se muitiplas chaves podem chegar no mesmo array
    // alguma hora vou ter uma colisão (Hash Collision)
    unsigned int index = hashCode(key);
    struct Node* node = hash->list[index];
    if (node == NULL)  hash->list[index] = createNode(key, value);
    else {
        while (node) {
            if (node->next == NULL) {
                node->next = createNode(key, value);
                break;
            }
            node = node->next;
        }
    }
}

char* search(struct Hash* hash, char* key) {
    unsigned int index = hashCode(key);
    struct Node* node = hash->list[index];
    while (node) {
        //usamos um string campair, que retorna 0 se as string tiverem o mesmo valor
        if (strcmp(node->key, key) == 0) return node->value;
        node = node->next;
    }
}

void main() {
    struct Hash* hash = (struct Hash*)malloc(sizeof(struct Hash));
    isertNode(hash, "Hello", "World");//hash["hello"] = "World"
    isertNode(hash, "Nome", "Sobrenome");//hash["Nome"] = "Sobrenome"

    printf("%s\n", search(hash, "Hello"));//hash["hello"]
    printf("%s\n", search(hash, "Nome"));//hash["Nome"]
}
