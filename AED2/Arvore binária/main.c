#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"


int main() {
  // struct Node* root = createNode(5);
  // insertNode(root, 7);
  // insertNode(root, 3);
  // insertNode(root, 6);
  // insertNode(root, 2);
  // insertNode(root, 4);
  // insertNode(root, 8);
  // insertNode(root, 9);
  // insertNode(root, 10);
  // insertNode(root, 1);
  struct Node* root = createNode(5);
  insertNode(root, 2);
  insertNode(root, 8);
  insertNode(root, 1);
  insertNode(root, 3);
  insertNode(root, 6);
  insertNode(root, 9);
  insertNode(root, 4);
  insertNode(root, 7);
  insertNode(root, 10);

  printf("Pre Order\n");
  showPreOrder(root);
  printf("\n");

  printf("In Order\n");
  showInOrder(root);
  printf("\n");

  printf("Post Order\n");
  showPostOrder(root);
  printf("\n");


  printf("Nodes: %d\n", numNode(root));
  printf("Folhas: %d\n", numFolhas(root));
  printf("Filhos a direita: %d\n", numFilhosDireita(root));



  removeNode(root, 1);
  printf("Nodes: %d\n", numNode(root));


  struct Node* root2 = createNode(17);
  insertNode(root2, 11);
  insertNode(root2, 15);
  insertNode(root2, 5);
  insertNode(root2, 10);
  printf("Pre Order\n");
  showPreOrder(root2);
  printf("\n");

  printf("In Order\n");
  showInOrder(root2);
  printf("\n");

  printf("Post Order\n");
  showPostOrder(root2);
  printf("\n\n\n\n\n");

  struct Node* root3 = createNode(9);
  insertNode(root3, 4);
  insertNode(root3, 12);
  insertNode(root3, 2);
  insertNode(root3, 6);
  insertNode(root3, 7);
  insertNode(root3, 8);
  insertNode(root3, 10);
  insertNode(root3, 16);
  insertNode(root3, 11);
  insertNode(root3, 13);
  insertNode(root3, 14);
  insertNode(root3, 18);
  // printf("Pre Order\n");
  // showPreOrder(root3);
  // printf("\n");

  // printf("In Order\n");
  // showInOrder(root3);
  // printf("\n");

  // printf("Post Order\n");
  // showPostOrder(root3);
  // printf("\n");

  // printf("Removendo o 8\n");
  // removeNode(root3, 8);
  // printf("Pre Order\n");
  // showPreOrder(root3);
  // printf("\n");


  // printf("Removendo o 7\n");
  // removeNode(root3, 7);
  // printf("In Order\n");
  // showInOrder(root3);
  // printf("\n");


  // printf("Removendo o 9\n");
  // removeNode(root3, 9);
  // printf("Post Order\n");
  // showPostOrder(root3);
  // printf("\n");


  printf("Maiores que 8 e menores que 7\n");
  imprimirMioresAMeoresB(root3, 15, 7);

  printf("Update o 18 por 20\n");
  update(root3, 18, 20);

  struct Node* merged = mergeTree(root, root2);
  printf("Arvore 1:\n");
  showTreeBonita(root);
  printf("Arvore 2:\n");
  showTreeBonita(root2);
  printf("Merged Tree:\n");
  showTreeBonita(merged);


  // 22. Escreva um algoritmo que imprima a árvore em níveis.

  printf("Impressao em niveis:\n");
  imprimirNiveis(root2);

  printf("\nPrograma finalizado.\n");

  return 0;

}
