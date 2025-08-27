#include <stdlib.h>

struct Node
{
  int valor;
  struct Node *direita;
  struct Node *esquerda;
};

struct Node* insert(struct Node* anterior, int value) {
  struct Node* node = (struct Node*)malloc(sizeof(struct Node));
  if(anterior->valor < value) {
    node->esquerda = anterior;
    node->
  } else node->direita = anterior;
  return node;
}

struct Node* createNode(int value, struct Node* anterior) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->valor = value;
    node->esquerda = anterior ? anterior : 0;
    return node;
}



void main() {
  struct Node* node = createNode(1, NULL);

  struct Node* second = insert(2, first);
  struct Node* third = insert(3, second);

}

