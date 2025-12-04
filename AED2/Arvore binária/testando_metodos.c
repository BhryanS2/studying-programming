#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

void printHeader(char* title) {
  printf("\n\n========================================\n");
  printf(" %s\n", title);
  printf("========================================\n");
}

int main() {
  struct Node* root = NULL;

  // 20. Inserção (Criando a árvore base para testes)
  printHeader("Insercao (Ex 20) e Criacao");
  //       10
  //      /  \/
    //     5    15
    //    / \   / \/
    //   3   7 12  18
  root = createNode(10);
  insertNode(root, 5);
  insertNode(root, 15);
  insertNode(root, 3);
  insertNode(root, 7);
  insertNode(root, 12);
  insertNode(root, 18);

  printf("Arvore criada com sucesso:\n");
  showTreeBonita(root);

  // Percursos (Pre, In, Post, Niveis)
  printHeader("Percursos");
  printf("Pre-Order: ");
  showPreOrder(root);
  printf("\n");

  printf("In-Order:  ");
  showInOrder(root);
  printf("\n");

  printf("Post-Order:");
  showPostOrder(root);
  printf("\n");

  printf("Em Niveis (Ex 22):\n");
  imprimirNiveis(root);

  // 1. Contagens (Nós, Folhas, Filhos à Direita)
  printHeader("Contagens (Ex 1)");
  printf("(a) Total de Nos: %d (Esperado: 7)\n", numNode(root));
  printf("(b) Total de Folhas: %d (Esperado: 4 -> 3, 7, 12, 18)\n", numFolhas(root));
  printf("(c) Filhos a Direita: %d\n", numFilhosDireita(root));

  // 17. Altura
  printHeader("Altura (Ex 17)");
  printf("Altura da arvore: %d\n", altura(root));

  // 2, 3, 4. Exibição específica de nós
  printHeader("Tipos de Nos (Ex 2, 3, 4)");
  printf("Nos com 2 filhos (Ex 2): ");
  exibeNosComDoisFilhos(root); // Esperado: 10, 5, 15
  printf("\n");

  printf("Nos com 1 filho (Ex 3): ");
  insertNode(root, 20); // 18 agora tem um filho (20)
  exibeNosComUmFilho(root); // Esperado: 18
  printf("\n");

  printf("Nos Folhas (Ex 4): ");
  exibeNosFolhas(root); // Esperado: 3, 7, 12, 20
  printf("\n");

  // 5, 6, 7. Pesquisa e Navegação
  printHeader("Pesquisa e Navegacao (Ex 5, 6, 7)");
  printf("Endereco do no 15 (Ex 5): ");
  exibeEnderecoNo(root, 15);

  printf("Filhos diretos de 5 (Ex 6):\n");
  exibeFilhosDiretos(root, 5); // Esperado: 3 e 7

  printf("Subarvore esquerda de 10 (Ex 7):\n");
  exibeSubarvoreEsquerda(root, 10); // Esperado: 3 5 7 (In Order)

  // 9, 10. Menor Valor e Sucessor
  printHeader("Valores e Sucessor (Ex 9, 10)");
  printf("Menor valor da arvore (Ex 9): %d\n", menorValor(root)); // Esperado: 3

  struct Node* suc = sucessor(root, 10);
  if (suc) printf("Sucessor de 10 (Ex 10): %d\n", suc->v); // Esperado: 12
  else printf("Sucessor de 10 nao encontrado.\n");

  // 13. Intervalo
  printHeader("Intervalo (Ex 13)");
  printf("Valores maiores que 5 e menores que 15:\n");
  imprimirMioresAMeoresB(root, 5, 15); // Esperado: 7, 10, 12

  // 8. Comparação de Árvores
  printHeader("Comparacao (Ex 8)");
  struct Node* rootClone = NULL;
  // Criando clone manual para teste
  rootClone = createNode(10); insertNode(rootClone, 5); insertNode(rootClone, 15);
  insertNode(rootClone, 3); insertNode(rootClone, 7); insertNode(rootClone, 12);
  insertNode(rootClone, 18); insertNode(rootClone, 20);

  printf("Comparando Arvore Original com Clone: %d (Esperado: 1)\n", comparar(root, rootClone));

  insertNode(rootClone, 99);
  printf("Comparando Apos modificar Clone: %d (Esperado: 0)\n", comparar(root, rootClone));

  // 15, 16. União e Interseção
  printHeader("Uniao e Intersecao (Ex 15, 16)");
  struct Node* T1 = createNode(10); insertNode(T1, 5); insertNode(T1, 20);
  struct Node* T2 = createNode(10); insertNode(T2, 30); insertNode(T2, 5);

  printf("Arvore T1: 10, 5, 20\n");
  printf("Arvore T2: 10, 30, 5\n");

  struct Node* Uniao = mergeTree(T1, T2);
  printf("Uniao T1 U T2 (Esperado: 5, 10, 20, 30):\n");
  showInOrder(Uniao); printf("\n");

  struct Node* Intersecao = intersectTree(T1, T2);
  printf("Intersecao T1 n T2 (Esperado: 5, 10):\n");
  showInOrder(Intersecao); printf("\n");

  // 14. Update
  printHeader("Update (Ex 14)");
  printf("Atualizando valor 12 para 14 na arvore original...\n");
  update(root, 12, 14);
  showInOrder(root); printf("\n");

  // 19, 21. Remoção
  printHeader("Remocao (Ex 19, 21)");

  printf("1. Removendo folha (3):\n");
  root = removeNode(root, 3);
  showTreeBonita(root);

  printf("2. Removendo no com 1 filho (18, que tem filho 20):\n");
  root = removeNode(root, 18);
  showTreeBonita(root);

  printf("3. Removendo no com 2 filhos (Raiz 10):\n");
  // Aqui testamos se a lógica do sucessor (Ex 19) está funcionando
  root = removeNode(root, 10);
  showTreeBonita(root);
  printf("Nota: O 10 deve ter sido substituido pelo seu sucessor (provavelmente 12 ou 14).\n");

  printHeader("FIM DOS TESTES");
  return 0;
}
